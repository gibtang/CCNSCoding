//
//  CCNSCoder.h
// 
//
//  Created by Igor Vovk on 20.03.13.
//  Copyright (c) 2013 Azukisoft Pte Ltd. All rights reserved.
//

/*
 v0.3 - added encode/decode Object 
 v0.4 - added encode/decode vector of Objects
 v0.4.1 - added method for retrieving amount of Objects in the vector int getLengthVectorOfObjectsForKey(std::string key);
 v0.4.2 - encodeObject methods returns bool to indicate read objects. Return true if object with specified key has been found and returns false otherwise.
 v0.4.3 - added autoreleased pointer as first parameter encodeVectorOfObjectsForKey
 v0.4.4 - fixed issue with releasing pointers after saving to file
 v0.4.5 - added constructor for instant reading from file
 v0.4.6 - added containsValueForKey function
 v0.5 - handling unique objects, changed object saving logic
 v0.5.1 - handled saving of empty vectors
 v0.5.2 - replaced non-local static object with local static object to prevent issues with global static members initialization order
 v0.5.3 - replaced global static veriables with static members of class
 
 version: 0.5
*/

#ifndef __CCNSCoder__
#define __CCNSCoder__

#include <iostream>
#include <vector>
#include <map>
#include "StringUtilities.h"
#include "FileReader.h"
#include "rapidjson/document.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

// This macro is used by CCNSEncodableObject subclasses to declare
// the constructor and alloc() functions (in the .h file)
#define ENCODABLE_OBJECT_DECLARE_CONSTRUCTOR(__CLASSNAME__) \
public: \
__CLASSNAME__(); /* Public Constructor */ \
static const char * encodable_object_identifier; /* String Identifier of current object  */ \
static bool encodable_object_registered; /* Flag indicates was object type registered or not */ \
public: \
static CCNSEncodableObject* alloc(); /* Public Factory function */ \

// This macro is used by CCNSEncodableObject subclasses to define
// the constructor and alloc() function (in the .cpp file)
#define ENCODABLE_OBJECT_DEFINE_CONSTRUCTOR(__CLASSNAME__) \
/* Ability identifier */ \
const char * __CLASSNAME__::encodable_object_identifier = #__CLASSNAME__; \
/* Register trigger with Factory at program launch */ \
bool __CLASSNAME__::encodable_object_registered = CCNSEncodableObject::registerEncodableObject(__CLASSNAME__::encodable_object_identifier, &__CLASSNAME__::alloc); \
/* Constructor */ \
__CLASSNAME__::__CLASSNAME__() : CCNSEncodableObject(__CLASSNAME__::encodable_object_identifier) { this->initObject(); } \
/* Public Factory function */ \
CCNSEncodableObject* __CLASSNAME__::alloc() \
{ \
    __CLASSNAME__* ta = new __CLASSNAME__(); \
    return ta; \
}

// This macro is used by CCNSEncodableObject subclasses to define
// the constructor and alloc() function (in the .cpp file)
#define ENCODABLE_OBJECT_DEFINE_CONSTRUCTOR_CUSTOM_BASE_CLASS(__CLASSNAME__,__BASE_CLASS__) \
/* Ability identifier */ \
const char * __CLASSNAME__::encodable_object_identifier = #__CLASSNAME__; \
/* Register trigger with Factory at program launch */ \
bool __CLASSNAME__::encodable_object_registered = __CLASSNAME__::registerEncodableObject(__CLASSNAME__::encodable_object_identifier, &__CLASSNAME__::alloc); \
/* Constructor */ \
__CLASSNAME__::__CLASSNAME__() : __BASE_CLASS__() { this->initObject(); __BASE_CLASS__::setObjectNameId(__CLASSNAME__::encodable_object_identifier); } \
/* Public Factory function */ \
CCNSEncodableObject* __CLASSNAME__::alloc() \
{ \
__CLASSNAME__* ta = new __CLASSNAME__(); \
/*ta->initWithDict(triggerActionDict);*/ \
/*ta->autorelease();*/ \
return ta; \
}

class CCNSCoder;
class CCNSEncodableObject
{
private:
    int reference_index;
    bool has_been_saved;
    std::string object_name_id;
    
public:
    
    // Define the type "AllocFuncPtr" which is a pointer to
	// a function with the method signature "CCNSEncodableObject* f()"
	typedef CCNSEncodableObject* (*AllocFuncPtr)();
    
    // Mapping between "__CLASSNAME__" and the __CLASSNAME__::create() function
    typedef std::map<std::string, CCNSEncodableObject::AllocFuncPtr> StringToAllocFuncMap;
    //static StringToAllocFuncMap alloc_func_map;
    
    static StringToAllocFuncMap & commonFuncMap()
    {
        static StringToAllocFuncMap func_map;
        return func_map;
    }
    
    static bool registerEncodableObject(const std::string& string_id, AllocFuncPtr alloc_func);    
    static CCNSEncodableObject *allocWithString(const std::string &string_id);
    
protected:
    CCNSEncodableObject(const std::string& string_id) : reference_index(-1), has_been_saved(false), object_name_id(string_id) { }
    
    virtual void initObject() { }
    
public:
    
    //CCNSEncodableObject() : reference_index(-1), has_been_saved(false), object_name_id("NULL") { }
    virtual ~CCNSEncodableObject() { }
    
    virtual void encodeWithCoder(CCNSCoder *encoder) { } //= 0;
    virtual void initWithCoder(CCNSCoder *decoder) { } //= 0;
    
    void setIndexReference(int index) { reference_index = index; }
    const int getIndexReference() const { return reference_index; }
    
    void setSaved() { has_been_saved = true; }
    bool isSaved() { return has_been_saved; }
    
    void resetSavedState() { has_been_saved = false; reference_index = -1; }
    
    const char * getObjectNameId() { return object_name_id.c_str(); }
    virtual void setObjectNameId(const std::string &name_id) { object_name_id = name_id; }
};

class CCNSCoder
{
private:
    typedef CCNSEncodableObject EncObj;
    static std::string path_to_save_file;
    
    std::string json_content;
    static std::vector<std::pair<std::string, CCNSEncodableObject *> > list_json_objects;
    
    std::map<std::string, int> int_values;
    std::map<std::string, double> double_values;
    std::map<std::string, std::string> string_values;
    std::map<std::string, bool> bool_values;

    std::map<std::string, void *> char_array_values;
    std::map<std::string, void *> int_array_values;
    std::map<std::string, void *> double_array_values;
    std::map<std::string, void *> string_array_values;
    
    std::map<std::string, CCNSEncodableObject *> object_values;
    std::map<std::string, std::string> encoded_object_reference;
    
    std::map<std::string, std::vector<CCNSEncodableObject *> *> array_vector_objects_values;
    std::map<std::string, std::vector<std::string> *> encoded_vector_object_references;
    
    std::vector<int> char_arrays_length;
    std::vector<int> int_arrays_length;
    std::vector<int> double_arrays_length;
    std::vector<int> string_arrays_length;
    std::vector<int> array_vector_objects_length;
    
    void clearContainers();
    void releaseEncodedPointers();
    void generateJSONContent(EncObj *obj, const char *obj_name);
    bool parseJSONContent(std::string content);
    
    // handling equal object pointers
    static void updateEqualObjectQueue(const std::map<std::string, CCNSEncodableObject *> &objects_to_check, const std::map<std::string, std::vector<CCNSEncodableObject *> *> &vector_objects_to_check);
    
    // handling equal objects
    static std::vector<CCNSEncodableObject *> unique_objects;
    static std::string unique_objects_json;
    static std::vector<std::pair<std::string, CCNSCoder *> > encoded_unique_objects;
    static std::vector<CCNSEncodableObject *> encoded_unique_objects_instances;
    
    static std::string getSaveDirectory();
    
    int getLengthVectorOfObjectsForKey(std::string key);
    int getArrayLengthByKey(std::string key);
    const char * getArrayTypeByKey(std::string key);
    
    bool containsValueForKey(std::string key);
    const char * getJsonContent() { return json_content.c_str(); }
public:
    
    CCNSCoder();
    CCNSCoder(const char *file_name);
    ~CCNSCoder();
    
    std::string getName();
    
    bool saveObjectToFile(std::string file_name, EncObj *obj);
    bool readObjectFromFile(std::string file_name, EncObj *obj);
    
    void encodeIntForKey(int int_val, std::string key);
    int decodeIntForKey(std::string key);
    void encodeDoubleForKey(double double_val, std::string key);
    double decodeDoubleForKey(std::string key);
    void encodeStringForKey(std::string string_val, std::string key);
    std::string decodeStringForKey(std::string key);
    void encodeBoolForKey(bool bool_val, std::string key);
    bool decodeBoolForKey(std::string key);
    
    void encodeObjectForKey(CCNSEncodableObject *obj_val, std::string key);
    CCNSEncodableObject * decodeObjectForKey(std::string key);
    
    void encodeVectorOfObjectsForKey(std::vector<CCNSEncodableObject *> *vect_obj, std::string key);
    std::vector<CCNSEncodableObject *> * decodeVectorOfObjectsForKey(std::string key);
    
    template<typename TypeArrayPointer>
    void encodeArrayForKey(TypeArrayPointer arr, int size, std::string key);
    template<typename TypeArrayPointer>
    TypeArrayPointer decodeArrayForKey(std::string key);
    
    template<typename TypeVectorPointer>
    void encodeVectorForKey(TypeVectorPointer *vect, std::string key);
    template<typename TypeVectorPointer>
    TypeVectorPointer decodeVectorForKey(std::string key);
    
    std::vector<std::string> decodeVectorOfStringsForKey(std::string key);
};

#endif /* defined(__CCNSCoder__) */
