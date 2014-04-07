    //
//  CCNSCoder.cpp
// 
//
//  Created by Igor Vovk on 20.03.13.
//  Copyright (c) 2013 Azukisoft Pte Ltd. All rights reserved.
//

#include <cstdio>
#include <algorithm>
#include "CCNSCoder.h"

using namespace std;
using namespace cocos2d;

// Mapping between "__CLASSNAME__" and the __CLASSNAME__::create() function
//CCNSEncodableObject::StringToAllocFuncMap CCNSEncodableObject::alloc_func_map;

bool CCNSEncodableObject::registerEncodableObject(const std::string& string_id, AllocFuncPtr alloc_func)
{
    //alloc_func_map[string_id] = alloc_func;
    CCNSEncodableObject::commonFuncMap()[string_id] = alloc_func;
    return true;
}

CCNSEncodableObject * CCNSEncodableObject::allocWithString(const std::string &string_id)
{
    // Lookup the map and find the corresponding stringID::create() function
    //StringToAllocFuncMap::const_iterator it = alloc_func_map.find(string_id);
    StringToAllocFuncMap::const_iterator it = CCNSEncodableObject::commonFuncMap().find(string_id);
    //if (it == alloc_func_map.end())
    if(it == CCNSEncodableObject::commonFuncMap().end())
    {
        CCLog("CRASH: creating trigger type '%s' ", string_id.c_str());
        assert(0);
    }
    else
    {
        // Create and return the new trigger action
        return it->second();
    }
    
    return NULL;
}


std::vector<CCNSEncodableObject *> CCNSCoder::unique_objects;
std::vector<std::pair<std::string, CCNSEncodableObject *> > CCNSCoder::list_json_objects;
std::vector<std::pair<std::string, CCNSCoder *> > CCNSCoder::encoded_unique_objects;
std::vector<CCNSEncodableObject *> CCNSCoder::encoded_unique_objects_instances;
std::string CCNSCoder::path_to_save_file = "";

CCNSCoder::CCNSCoder()
{
    
}

CCNSCoder::CCNSCoder(const char *file_name)
{
    this->readObjectFromFile(file_name, NULL);
}

std::string CCNSCoder::getSaveDirectory()
{
    if(path_to_save_file.compare("") == 0)
    {
        path_to_save_file = CCFileUtils::sharedFileUtils()->getWritablePath();
    }
    
    return path_to_save_file;
}

bool CCNSCoder::saveObjectToFile(std::string file_name, EncObj *obj)
{
    // open file
    string full_path = this->getSaveDirectory();
    full_path.append(file_name);
    
    FILE *f_pointer = fopen(full_path.c_str(), "w");
    if(!f_pointer) return false;
    
    list_json_objects.clear();
    
    // generate json (and also determine all existing objects in JSON)
    this->generateJSONContent(obj, NULL);
    std::string all_json = this->getJsonContent();
    
    // select unique json strings
    std::vector<std::pair<std::string, CCNSEncodableObject *>> unique_objects_json;
    for(std::vector<CCNSEncodableObject *>::const_iterator it = unique_objects.begin(); it != unique_objects.end(); ++it)
    {
        std::vector<std::pair<std::string, CCNSEncodableObject *> >::iterator it2 = std::find_if(list_json_objects.begin(), list_json_objects.end(), //list_json_objects[0]);
                                                                                              [it] (std::pair<std::string, CCNSEncodableObject *> const &o1)
                                                                                              {
                                                                                                  return o1.second == *it;
                                                                                              });
        if(it2 != list_json_objects.end())
        {
            unique_objects_json.push_back(*it2);
        }
    }
    
    // sort unique objects to match indexes
    std::sort(unique_objects_json.begin(), unique_objects_json.end(), [] (std::pair<std::string, CCNSEncodableObject *> cmp1,
                                                                      std::pair<std::string, CCNSEncodableObject *> cmp2)
    {
        return cmp1.second->getIndexReference() < cmp2.second->getIndexReference();
    });
    
    std::string obj_json = "";
    for(int i = 0; i < unique_objects_json.size(); i++)
    {
        if(i != 0) obj_json.append(",");
        obj_json.append(unique_objects_json[i].first);
    }
    
    // saving generated json to the file
    cstr::stringByReplacingOccurrencesString(json_content, "__UNI_OBJS__", obj_json);
    bool result = true;
    if(fprintf(f_pointer, "%s", json_content.c_str()) < 0) result = false;
    if(fclose(f_pointer) != 0) result = false;
    
    // reset saved state for all decoded objects
    for (EncObj *o : unique_objects)
    {
        o->resetSavedState();
    }
    
    // clean up static data after saving
    for(std::vector<std::pair<std::string, CCNSCoder *>>::iterator it = encoded_unique_objects.begin(); it != encoded_unique_objects.end(); ++it)
        delete it->second;
    encoded_unique_objects.clear();
    
    unique_objects.clear();
    list_json_objects.clear();
    encoded_unique_objects_instances.clear();
    
    return result;
}

void CCNSCoder::generateJSONContent(EncObj *obj, const char *obj_name)
{
    // collect all values by calling encodeWithCoder of non-abstract class
    if(obj != NULL)
    {
        // clear container before getting latest values
        this->clearContainers();
        
        // collect values
        obj->encodeWithCoder(this);
    }
    
    // update list of unique objects and references
    CCNSCoder::updateEqualObjectQueue(this->object_values, this->array_vector_objects_values);
    
    const char *root_key;
    if(obj_name == NULL)
        root_key = "Root";
    else root_key = obj_name;
    
    std::string uniq_obj_placeholder = "";
    if(obj_name == NULL) // saving unique objects json into Root json object
    {
        uniq_obj_placeholder = "\"unique_objects\":[__UNI_OBJS__],";
    }
    
    // generating json content
    string full_json = cstr::stringWithFormat("{\"object_type_name\":\"%s\",\"key\":\"%s\",\"ref\":\"%s\",%s\"properties\":[", ((obj == NULL) ? "NULL" : obj->getObjectNameId()), root_key,
                                         ((obj == NULL) ? "NULL" : cstr::stringWithFormat("%d", obj->getIndexReference()).c_str()), uniq_obj_placeholder.c_str());
    
    if(obj != NULL)
    {
        // check is current object has been already saves
        if(obj->isSaved()) // prevent double saving of the same object
        {
            json_content = full_json + "]}";
            return;
        }
        
        // consider this object as saved
        obj->setSaved();
    }
    
    int idx = 0, idx_iter = 0;
    
    for(map<string, int>::const_iterator it = int_values.begin(); it != int_values.end(); ++it, idx++)
    {
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"int\",\"key\":\"%s\",\"value\":[%d]}", full_json.c_str(), it->first.c_str(), it->second);
    }
    
    for(map<string, double>::const_iterator it = double_values.begin(); it != double_values.end(); ++it, idx++)
    {
        if(idx > 0)
            full_json.append(","); // = cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"double\",\"key\":\"%s\",\"value\":[%f]}", full_json.c_str(), it->first.c_str(), it->second);
    }
    
    for(map<string, string>::const_iterator it = string_values.begin(); it != string_values.end(); ++it, idx++)
    {
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"string\",\"key\":\"%s\",\"value\":[\"%s\"]}", full_json.c_str(), it->first.c_str(), it->second.c_str());
    }
    
    for(map<string, bool>::const_iterator it = bool_values.begin(); it != bool_values.end(); ++it, idx++)
    {
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"bool\",\"key\":\"%s\",\"value\":[%d]}", full_json.c_str(), it->first.c_str(), it->second);
    }
    
    idx_iter = 0;
    for(map<string, void *>::const_iterator it = char_array_values.begin(); it != char_array_values.end(); ++it, idx++, idx_iter++)
    {
        vector<int>::const_iterator l_it = char_arrays_length.begin() + idx_iter;
        
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"char_p\",\"key\":\"%s\",\"value\":[", full_json.c_str(), it->first.c_str());
        
        int len = *l_it;
        string str = "";
        for(int i = 0; i < len; i++)
        {
            str.append(cstr::stringWithFormat("\"%c\"", ((char *)it->second)[i]));
            if(i < len -1) str.append(",");
        }
        
        full_json.append(str + "]}");
        l_it++;
    }
    
    idx_iter = 0;
    for(map<string, void *>::const_iterator it = int_array_values.begin(); it != int_array_values.end(); ++it, idx++, idx_iter++)
    {
        vector<int>::const_iterator l_it = int_arrays_length.begin() + idx_iter;
        
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"int_p\",\"key\":\"%s\",\"value\":[", full_json.c_str(), it->first.c_str());
        
        int len = *l_it;
        string str = "";
        for(int i = 0; i < len; i++)
        {
            str.append(cstr::stringWithFormat("%d", ((int *)it->second)[i]));
            if(i < len -1) str.append(",");
        }
        
        full_json.append(str + "]}");
    }
    
    idx_iter = 0;
    for(map<string, void *>::const_iterator it = double_array_values.begin(); it != double_array_values.end(); ++it, idx++, idx_iter++)
    {
        vector<int>::const_iterator l_it = double_arrays_length.begin() + idx_iter;
        
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json());
        full_json = cstr::stringWithFormat("%s{\"type\":\"double_p\",\"key\":\"%s\",\"value\":[", full_json.c_str(), it->first.c_str());
        
        int len = *l_it;
        string str = "";
        for(int i = 0; i < len; i++)
        {
            str.append(cstr::stringWithFormat("%f", ((double *)it->second)[i]));
            if(i < len -1) str.append(",");
        }
        
        full_json.append(str + "]}");
    }
    
    idx_iter = 0;
    for(map<string, void *>::const_iterator it = string_array_values.begin(); it != string_array_values.end(); ++it, idx++, idx_iter++)
    {
        vector<int>::const_iterator l_it = string_arrays_length.begin() + idx_iter;
        
        if(idx > 0)
            full_json.append(","); //= cstr::stringWithFormat("%s,", full_json.c_str());
        full_json = cstr::stringWithFormat("%s{\"type\":\"std_string_p\",\"key\":\"%s\",\"value\":[", full_json.c_str(), it->first.c_str());
        
        int len = *l_it;
        string str = "";
        for(int i = 0; i < len; i++)
        {
            str.append(cstr::stringWithFormat("\"%s\"", (((std::string *)it->second)[i]).c_str()));
            if(i < len -1) str.append(",");
        }
        
        full_json.append(str + "]}");
    }
    
    // encode CCNSEncodableObject
    idx_iter = 0;
    CCNSCoder *coder;
    for(map<string, CCNSEncodableObject *>::const_iterator it = object_values.begin(); it != object_values.end(); ++it, idx++, idx_iter++)
    {
        coder = new CCNSCoder();
        coder->generateJSONContent(it->second, it->first.c_str());
        if(idx > 0 && strlen(coder->getJsonContent()) > 0)
            full_json.append(",");

        full_json.append(coder->getJsonContent());
        
        delete coder;
    }
    
    // encode vector of CCNSEncodableObject objects
    idx_iter = 0;
    for(map<string, std::vector<CCNSEncodableObject *> *>::const_iterator it = array_vector_objects_values.begin(); it != array_vector_objects_values.end(); ++it, idx++, idx_iter++)
    {
        if(idx > 0)
            full_json.append(",");

        full_json.append(cstr::stringWithFormat("{\"type\":\"vector_objects\",\"key\":\"%s\",\"value\":[", it->first.c_str()));
        
        vector<CCNSEncodableObject *> *vect = it->second;
        CCNSEncodableObject *enobj = NULL;
        
        for(int i = 0; i < vect->size(); i++)
        {
            enobj = vect->operator[](i);
            coder = new CCNSCoder();
            coder->generateJSONContent(enobj, cstr::stringWithFormat("elem_%d", i).c_str());
            if(i > 0 && strlen(coder->getJsonContent()) > 0)
                full_json.append(",");

            full_json.append(coder->getJsonContent());
            delete coder;
        }
        full_json.append("]}");
    }
    
    full_json.append("]}");
    
    if(obj_name != NULL)
        list_json_objects.push_back({full_json, obj});
    
    json_content = full_json;
    this->releaseEncodedPointers();
}

/* reading object values form file */
bool CCNSCoder::readObjectFromFile(std::string file_name, EncObj *obj)
{
    // clear container before getting latest values
    this->clearContainers();
    
    string full_path = this->getSaveDirectory() + file_name; //CCFileUtils::sharedFileUtils()->getWritablePath() + file_name;
    if(FileReader::isFileExist(full_path.c_str())) // file exist
    {
        FileReader *fr = new FileReader(full_path.c_str());
        
        if(!parseJSONContent(fr->getFileContents()))
        {
            delete fr;
            return false;
        }
        
        if(obj != NULL)
            obj->initWithCoder(this);
        
        delete fr;
        return true;
    }
    else // file does not exist
    {
        return false;
    }
}

bool CCNSCoder::parseJSONContent(std::string content)
{
    rapidjson::Document json_document, properties;
    
    // parse all parameters from the file to memory and call initWithCoder to pass all parameters to user class
    if(!json_document.Parse<0>(content.c_str()).HasParseError())
    {
        // parse saved unique objects first
        const rapidjson::Value& objs = json_document["unique_objects"];
        if(objs.IsArray())
        {
            for (rapidjson::SizeType i = 0; i < objs.Size(); i++)
            {
                if(objs[i]["object_type_name"].IsString()) // decode object
                {
                    // Convert JSON document to string
                    rapidjson::StringBuffer strbuf;
                    rapidjson::Writer<rapidjson::StringBuffer> writer(strbuf);
                    objs[i].Accept(writer);
                    
                    CCNSCoder *cod = new CCNSCoder();
                    cod->parseJSONContent(strbuf.GetString());
                    encoded_unique_objects.push_back({objs[i]["object_type_name"].GetString(), cod});
                    encoded_unique_objects_instances.push_back(NULL);
                }
            }
        }
        
        const rapidjson::Value& props = json_document["properties"];
        
        for (rapidjson::SizeType i = 0; i < props.Size(); i++)
        {
            if(props[i]["type"].IsString())
            {
                if(strcmp(props[i]["type"].GetString(), "int") == 0) // int
                {
                    int_values.insert({props[i]["key"].GetString(), props[i]["value"][(rapidjson::SizeType)0].GetInt()});
                }
                else if(strcmp(props[i]["type"].GetString(), "double") == 0) // double
                {
                    double_values.insert({props[i]["key"].GetString(), props[i]["value"][(rapidjson::SizeType)0].GetDouble()});
                }
                else if(strcmp(props[i]["type"].GetString(), "string") == 0) // string
                {
                    string_values.insert({props[i]["key"].GetString(), props[i]["value"][(rapidjson::SizeType)0].GetString()});
                }
                else if(strcmp(props[i]["type"].GetString(), "bool") == 0) // bool
                {
                    bool_values.insert({props[i]["key"].GetString(), props[i]["value"][(rapidjson::SizeType)0].GetInt()});
                }
                else if(strcmp(props[i]["type"].GetString(), "char_p") == 0) // char *
                {
                    char *p_ch = new char[props[i]["value"].Size()];
                    for(int idx = 0; idx < props[i]["value"].Size(); idx++)
                        p_ch[idx] = props[i]["value"][idx].GetString()[0];
                    
                    char_array_values.insert({props[i]["key"].GetString(), p_ch});
                    char_arrays_length.push_back(props[i]["value"].Size());
                }
                else if(strcmp(props[i]["type"].GetString(), "int_p") == 0) // int *
                {
                    int *p_int = new int[props[i]["value"].Size()];
                    for(int idx = 0; idx < props[i]["value"].Size(); idx++)
                        p_int[idx] = props[i]["value"][idx].GetInt();
                    
                    int_array_values.insert({props[i]["key"].GetString(), p_int});
                    int_arrays_length.insert(int_arrays_length.end(), props[i]["value"].Size());
                }
                else if(strcmp(props[i]["type"].GetString(), "double_p") == 0) // double *
                {
                    double *p_dbl = new double[props[i]["value"].Size()];
                    for(int idx = 0; idx < props[i]["value"].Size(); idx++)
                    {
                        p_dbl[idx] = props[i]["value"][idx].GetDouble();
                    }
                    
                    double_array_values.insert({props[i]["key"].GetString(), p_dbl});
                    double_arrays_length.push_back(props[i]["value"].Size());
                }
                else if(strcmp(props[i]["type"].GetString(), "std_string_p") == 0) // std::string *
                {
                    std::string *p_str = new std::string[props[i]["value"].Size()];
                    for(int idx = 0; idx < props[i]["value"].Size(); idx++)
                    {
                        p_str[idx] = props[i]["value"][idx].GetString();
                    }
                    
                    string_array_values.insert({props[i]["key"].GetString(), p_str});
                    string_arrays_length.push_back(props[i]["value"].Size());
                }
                else if(cstr::isStringsEqual(props[i]["type"].GetString(), "vector_objects")) // vector of objects
                {
                    std::vector<std::string> *vect_obj = new std::vector<std::string>();
                    
                    for(int i_t = 0; i_t < props[i]["value"].Size(); i_t++)
                    {
                        // Convert JSON document to string
                        rapidjson::StringBuffer strbuf;
                        rapidjson::Writer<rapidjson::StringBuffer> writer(strbuf);
                        props[i]["value"][i_t].Accept(writer);
                        
                        //CCNSCoder *cod = new CCNSCoder();
                        //cod->parseJSONContent(strbuf.GetString());
                        vect_obj->push_back(props[i]["value"][i_t]["ref"].GetString());
                    }
                    
                    encoded_vector_object_references.insert({props[i]["key"].GetString(), vect_obj});
                }
            }
            else if(props[i]["object_type_name"].IsString()) // decode object
            {
                // Convert JSON document to string
                rapidjson::StringBuffer strbuf;
                rapidjson::Writer<rapidjson::StringBuffer> writer(strbuf);
                props[i].Accept(writer);
                
                encoded_object_reference.insert({props[i]["key"].GetString(), props[i]["ref"].GetString()});
            }
        }
    }
    else
    {
        CCLog("there are parse errors");
        CCLog("%s Error offset %d", json_document.GetParseError(), (int)json_document.GetErrorOffset());
        
        return false;
    }
    
    return true;
}

void CCNSCoder::updateEqualObjectQueue(const std::map<std::string, CCNSEncodableObject *> &objects_to_check, const std::map<std::string, std::vector<CCNSEncodableObject *> *> &vector_objects_to_check)
{
    bool object_in_a_queue = false;
    
    // check single objects first
    for(std::map<std::string, CCNSEncodableObject *>::const_iterator it = objects_to_check.begin(); it != objects_to_check.end(); ++it)
    {
        object_in_a_queue = false;
        for(int i = 0; i < unique_objects.size(); i++)
        {
            if(it->second == unique_objects[i]) // unique objects already contains (it->second) object
            {
                it->second->setIndexReference(i);
                object_in_a_queue = true;
                break;
            }
        }
        
        if(!object_in_a_queue)
        {
            unique_objects.push_back(it->second);
            it->second->setIndexReference(unique_objects.size() - 1);
        }
    }
    
    // check vector of objects
    object_in_a_queue = false;
    std::vector<CCNSEncodableObject *> *nested_vect;
    for(std::map<std::string, std::vector<CCNSEncodableObject *> *>::const_iterator it = vector_objects_to_check.begin(); it != vector_objects_to_check.end(); ++it)
    {
        nested_vect = it->second;
        
        for(vector<CCNSEncodableObject *>::iterator nested_it = nested_vect->begin(); nested_it != nested_vect->end(); ++nested_it)
        {
            object_in_a_queue = false;
            for(int i = 0; i < unique_objects.size(); i++)
            {
                if((*nested_it) == unique_objects[i]) // unique objects already contains (it->second) object
                {
                    (*nested_it)->setIndexReference(i);
                    object_in_a_queue = true;
                    break;
                }
            }
            
            if(!object_in_a_queue)
            {
                unique_objects.push_back((*nested_it));
                (*nested_it)->setIndexReference(unique_objects.size() - 1);
            }
        }
    }
}

void CCNSCoder::encodeIntForKey(int int_val, std::string key)
{
    int_values.insert({key, int_val});
}
int CCNSCoder::decodeIntForKey(std::string key)
{
    map<string, int>::iterator iter = int_values.begin();
    iter = int_values.find(key);
    if (iter != int_values.end())
        return iter->second;
    
    return 0; // an exception should be thrown ?
}

void CCNSCoder::encodeDoubleForKey(double double_val, std::string key)
{
    double_values.insert({key, double_val});
}
double CCNSCoder::decodeDoubleForKey(std::string key)
{
    map<string, double>::iterator iter = double_values.begin();
    iter = double_values.find(key);
    if (iter != double_values.end())
        return iter->second;
    
    return 0.0;
}
void CCNSCoder::encodeStringForKey(std::string string_val, std::string key)
{
    string_values.insert({key, string_val});
}
std::string CCNSCoder::decodeStringForKey(std::string key)
{
    map<string, string>::iterator iter = string_values.begin();
    iter = string_values.find(key);
    if (iter != string_values.end())
        return iter->second;
    
    return "";
}

void CCNSCoder::encodeBoolForKey(bool bool_val, std::string key)
{
    bool_values.insert({key, bool_val});
}
bool CCNSCoder::decodeBoolForKey(std::string key)
{
    map<string, bool>::iterator iter = bool_values.begin();
    iter = bool_values.find(key);
    if (iter != bool_values.end())
        return iter->second;
    
    return false;
}

void CCNSCoder::encodeObjectForKey(CCNSEncodableObject *obj_val, std::string key)
{
    object_values.insert({key, obj_val});
}

CCNSEncodableObject * CCNSCoder::decodeObjectForKey(std::string key)
{
    CCNSEncodableObject *obj = NULL;
    map<string, string>::iterator iter = encoded_object_reference.begin();
    iter = encoded_object_reference.find(key);
    if (iter != encoded_object_reference.end())
    {
        int obj_idx = atoi(iter->second.c_str());
        // check for previously created object and return it
        if(encoded_unique_objects_instances[obj_idx] != NULL)
        {
            return encoded_unique_objects_instances[obj_idx];
        }
        else // there is no such object yet, initialize and save to vector
        {
            CCLog("decoded: %s", encoded_unique_objects[obj_idx].first.c_str());
            CCNSCoder *cod = encoded_unique_objects[obj_idx].second;
            obj = CCNSEncodableObject::allocWithString(encoded_unique_objects[obj_idx].first);
            encoded_unique_objects_instances[obj_idx] = obj;
            obj->initWithCoder(cod);
        }
    }
    return obj;
}

void CCNSCoder::encodeVectorOfObjectsForKey(std::vector<CCNSEncodableObject *> *vect_obj, std::string key)
{
    array_vector_objects_values.insert({key, new std::vector<CCNSEncodableObject *>(*vect_obj)});
}
std::vector<CCNSEncodableObject *> * CCNSCoder::decodeVectorOfObjectsForKey(std::string key)
{
    std::vector<CCNSEncodableObject *> *result_vector = NULL;
    EncObj *obj;
    map<string, vector<std::string> *>::iterator iter = encoded_vector_object_references.begin();
    iter = encoded_vector_object_references.find(key);
    if (iter != encoded_vector_object_references.end())
    {
        result_vector = new std::vector<CCNSEncodableObject *>();
        for(int i = 0; i < iter->second->size(); i++)
        {
            obj = NULL;
            int obj_idx = atoi(iter->second->operator[](i).c_str());
            // check for previously created object and return it
            if(encoded_unique_objects_instances[obj_idx] != NULL)
            {
                obj = encoded_unique_objects_instances[obj_idx];
            }
            else // allocate new object
            {
                CCNSCoder *cod = encoded_unique_objects[obj_idx].second;
                obj = CCNSEncodableObject::allocWithString(encoded_unique_objects[obj_idx].first);
                encoded_unique_objects_instances[obj_idx] = obj;
                obj->initWithCoder(cod);
            }
            
            result_vector->push_back(obj);
        }
    }
    
    return result_vector;
}

int CCNSCoder::getLengthVectorOfObjectsForKey(std::string key)
{
    map<string, vector<std::string> *>::iterator iter = encoded_vector_object_references.begin();
    iter = encoded_vector_object_references.find(key);
    if (iter != encoded_vector_object_references.end())
    {
        return iter->second->size();
    }
    return 0;
}

template<typename TypeArrayPointer>
void CCNSCoder::encodeArrayForKey(TypeArrayPointer arr, int size, std::string key)
{
    if(typeid(arr) == typeid(char *))
    {
        char_array_values.insert({key, arr});
        char_arrays_length.insert(char_arrays_length.begin(), size);
    }
    else if(typeid(arr) == typeid(int *))
    {
        int_array_values.insert({key, arr});
        int_arrays_length.insert(int_arrays_length.begin(), size);
    }
    else if(typeid(arr) == typeid(double *))
    {
        double_array_values.insert({key, arr});
        double_arrays_length.insert(double_arrays_length.begin(), size);
    }
    else if(typeid(arr) == typeid(std::string *))
    {
        string_array_values.insert({key, arr});
        string_arrays_length.insert(string_arrays_length.begin(), size);
    }
}

template void CCNSCoder::encodeArrayForKey<int *>(int *, int, std::string key);
template void CCNSCoder::encodeArrayForKey<double *>(double *, int, std::string key);
template void CCNSCoder::encodeArrayForKey<char *>(char *, int, std::string key);
template void CCNSCoder::encodeArrayForKey<std::string *>(std::string *, int, std::string key);

template<typename TypeArrayPointer>
TypeArrayPointer CCNSCoder::decodeArrayForKey(std::string key)
{
    map<string, void *>::iterator iter = char_array_values.begin();
    iter = char_array_values.find(key);
    if (iter != char_array_values.end())
        return (TypeArrayPointer)iter->second;
    
    iter = int_array_values.begin();
    iter = int_array_values.find(key);
    if (iter != int_array_values.end())
        return (TypeArrayPointer)iter->second;
    
    iter = double_array_values.begin();
    iter = double_array_values.find(key);
    if (iter != double_array_values.end())
        return (TypeArrayPointer)iter->second;
    
    iter = string_array_values.begin();
    iter = string_array_values.find(key);
    if (iter != string_array_values.end())
        return (TypeArrayPointer)iter->second;
    
    return NULL; // an exception should be thrown ?
}

template int * CCNSCoder::decodeArrayForKey(std::string key);
template double * CCNSCoder::decodeArrayForKey(std::string key);
template char * CCNSCoder::decodeArrayForKey(std::string key);
template std::string * CCNSCoder::decodeArrayForKey(std::string key);

int CCNSCoder::getArrayLengthByKey(std::string key)
{
    map<string, void *>::iterator iter = char_array_values.begin();
    iter = char_array_values.find(key);
    if (iter != char_array_values.end())
        return char_arrays_length[std::distance( char_array_values.begin(), iter)];
    
    iter = int_array_values.begin();
    iter = int_array_values.find(key);
    if (iter != int_array_values.end())
        return int_arrays_length[std::distance( int_array_values.begin(), iter)];
    
    iter = double_array_values.begin();
    iter = double_array_values.find(key);
    if (iter != double_array_values.end())
        return double_arrays_length[std::distance( double_array_values.begin(), iter)];
    
    iter = string_array_values.begin();
    iter = string_array_values.find(key);
    if (iter != string_array_values.end())
        return string_arrays_length[std::distance( string_array_values.begin(), iter)];
    
    return -1;
}

const char * CCNSCoder::getArrayTypeByKey(std::string key)
{
    map<string, void *>::iterator iter = char_array_values.begin();
    iter = char_array_values.find(key);
    if (iter != char_array_values.end())
        return typeid(char *).name();
        
    iter = int_array_values.begin();
    iter = int_array_values.find(key);
    if (iter != int_array_values.end())
        return typeid(int *).name();
    
    iter = double_array_values.begin();
    iter = double_array_values.find(key);
    if (iter != double_array_values.end())
        return typeid(double *).name();
    
    iter = string_array_values.begin();
    iter = string_array_values.find(key);
    if (iter != string_array_values.end())
        return typeid(std::string *).name();
    
    return "undefined_type";
}

bool CCNSCoder::containsValueForKey(std::string key)
{
    map<string, int>::iterator iter_i = int_values.begin();
    iter_i = int_values.find(key);
    if (iter_i != int_values.end())
        return true;
    
    map<string, double>::iterator iter_d = double_values.begin();
    iter_d = double_values.find(key);
    if (iter_d != double_values.end())
        return true;
    
    map<string, string>::iterator iter_s = string_values.begin();
    iter_s = string_values.find(key);
    if (iter_s != string_values.end())
        return true;
    
    map<string, bool>::iterator iter_b = bool_values.begin();
    iter_b = bool_values.find(key);
    if (iter_b != bool_values.end())
        return true;
    
    map<string, string>::iterator iter_o = encoded_object_reference.begin();
    iter_o = encoded_object_reference.find(key);
    if (iter_o != encoded_object_reference.end())
        return true;
    
    map<string, vector<std::string> *>::iterator iter_v = encoded_vector_object_references.begin();
    iter_v = encoded_vector_object_references.find(key);
    if (iter_v != encoded_vector_object_references.end())
        return true;
    
    map<string, void *>::iterator iter = char_array_values.begin();
    iter = char_array_values.find(key);
    if (iter != char_array_values.end())
        return true;
    
    iter = int_array_values.begin();
    iter = int_array_values.find(key);
    if (iter != int_array_values.end())
        return true;
    
    iter = double_array_values.begin();
    iter = double_array_values.find(key);
    if (iter != double_array_values.end())
        return true;
    
    iter = string_array_values.begin();
    iter = string_array_values.find(key);
    if (iter != string_array_values.end())
        return true;
    
    return false;
}

template<typename TypeVectorPointer>
void CCNSCoder::encodeVectorForKey(TypeVectorPointer *vect, std::string key)
{
    if(typeid(vect) == typeid(vector<int> *))
    {
        int *t_arr = ((vect->size() == 0) ? NULL : (int *)&(*vect)[0]);
        int *arr = new int[vect->size()];
        for(int i = 0; i < vect->size(); i++)
            arr[i] = t_arr[i];
        this->encodeArrayForKey(arr, vect->size(), key);
    }
    else if(typeid(vect) == typeid(vector<char> *))
    {
        char *t_arr = ((vect->size() == 0) ? NULL : (char *)&(*vect)[0]);
        char *arr = new char[vect->size()];
        for(int i = 0; i < vect->size(); i++)
            arr[i] = t_arr[i];
        this->encodeArrayForKey(arr, vect->size(), key);
    }
    else if(typeid(vect) == typeid(vector<double> *))
    {
        double *t_arr = ((vect->size() == 0) ? NULL : (double *)&(*vect)[0]);
        double *arr = new double[vect->size()];
        for(int i = 0; i < vect->size(); i++)
            arr[i] = t_arr[i];
        this->encodeArrayForKey(arr, vect->size(), key);
    }
    else if(typeid(vect) == typeid(vector<std::string> *))
    {
        std::string *t_arr = ((vect->size() == 0) ? NULL : (std::string *)&(*vect)[0]);
        string *arr = new string[vect->size()];
        for(int i = 0; i < vect->size(); i++)
            arr[i] = t_arr[i];
        this->encodeArrayForKey(arr, vect->size(), key);
    }
}

template void CCNSCoder::encodeVectorForKey<std::vector<int>>(std::vector<int> *, std::string key);
template void CCNSCoder::encodeVectorForKey<std::vector<char>>(std::vector<char> *, std::string key);
template void CCNSCoder::encodeVectorForKey<std::vector<double>>(std::vector<double> *, std::string key);
template void CCNSCoder::encodeVectorForKey<std::vector<std::string>>(std::vector<std::string> *, std::string key);

template<typename TypeVectorPointer>
TypeVectorPointer CCNSCoder::decodeVectorForKey(std::string key)
{
    TypeVectorPointer res;
    if(getArrayTypeByKey(key) == typeid(char *).name())
    {
        char *x = decodeArrayForKey<char *>(key);
        TypeVectorPointer v(x, x + sizeof x / sizeof x[this->getArrayLengthByKey(key)]);
        res = v;
    }
    else if(getArrayTypeByKey(key) == typeid(int *).name())
    {
        int *x = decodeArrayForKey<int *>(key);
        TypeVectorPointer v(x, x + this->getArrayLengthByKey(key)/*x + sizeof x / sizeof x[this->getArrayLengthByKey(key)]*/);
        res = v;
    }
    else if(getArrayTypeByKey(key) == typeid(double *).name())
    {
        double *x = decodeArrayForKey<double *>(key);
        TypeVectorPointer v(x, x + sizeof x / sizeof x[this->getArrayLengthByKey(key)]);
        res = v;
    }
    
    return res;
}

template vector<int> CCNSCoder::decodeVectorForKey(std::string key);
template vector<double> CCNSCoder::decodeVectorForKey(std::string key);
template vector<char> CCNSCoder::decodeVectorForKey(std::string key);

std::vector<std::string> CCNSCoder::decodeVectorOfStringsForKey(std::string key)
{
    std::string *x = decodeArrayForKey<std::string *>(key);
    int len = this->getArrayLengthByKey(key);
    vector<string> v(x, (x + len));
    
    return v;
}

std::string CCNSCoder::getName() { return "my_custome_name"; }

void CCNSCoder::releaseEncodedPointers()
{
    for(std::map<string, vector<CCNSEncodableObject *> *>::iterator it = array_vector_objects_values.begin(); it != array_vector_objects_values.end(); ++it)
        delete it->second;
}

void CCNSCoder::clearContainers()
{
    // clear arrays
    int_values.clear();
    double_values.clear();
    string_values.clear();
    bool_values.clear();
    
    // delete pointers
    for(std::map<string, std::vector<std::string> *>::iterator it = encoded_vector_object_references.begin(); it != encoded_vector_object_references.end(); ++it)
        delete it->second;
    encoded_vector_object_references.clear();
    
    encoded_object_reference.clear();
    
    object_values.clear();
    
    for(std::map<string, void *>::iterator it = char_array_values.begin(); it != char_array_values.end(); ++it)
    {
        delete[] (char *)it->second;
    }
    char_array_values.clear();
    
    for(std::map<string, void *>::iterator it = int_array_values.begin(); it != int_array_values.end(); ++it)
    {
        delete[] (int *)it->second;
    }
    int_array_values.clear();
    
    for(std::map<string, void *>::iterator it = double_array_values.begin(); it != double_array_values.end(); ++it)
    {
        delete[] (double *)it->second;
    }
    double_array_values.clear();
    
    for(std::map<string, void *>::iterator it = string_array_values.begin(); it != string_array_values.end(); ++it)
    {
        delete[] (std::string *)it->second;
    }
    string_array_values.clear();
    
    char_arrays_length.clear();
    int_arrays_length.clear();
    double_arrays_length.clear();
    string_arrays_length.clear();
}

CCNSCoder::~CCNSCoder()
{
    this->clearContainers();
    CCLog("CCNSCoder has been deleted");
}