//
//  FileReader.cpp
//  
//
//  Created by Igor Vovk on 07.03.13.
//  Copyright (c) 2013. All rights reserved.
//

#include "FileReader.h"

#include <fstream>
#include "cocos2d.h"

using namespace cocos2d;
using namespace std;

FileReader::FileReader(const char *file_name, char p_mode)
{
    // Initialize variables needed
    unsigned long file_size = 0;
    unsigned char * fileContents = NULL;
    string thisLine, result, fullPath, contents;
    plain_file_content = NULL;
    
    // Get absolute path of file
    //fullPath = CCFileUtils::sharedFileUtils( )->fullPathFromRelativePath( pFileName.c_str( ) );
    fullPath = FileUtils::getInstance( )->fullPathForFilename(file_name);
    
    // Get data of file
    fileContents = FileUtils::getInstance( )->getFileData( fullPath.c_str( ) , "r", &file_size );
    contents.append( ( char * ) fileContents );
    
    plain_file_content = new string((char *)fileContents, file_size);
    
    // Create a string stream so that we can use getline( ) on it
    istringstream fileStringStream( contents );
    
    // Get file contents line by line
    while ( getline( fileStringStream, thisLine ) )
    {
        // Put all lines in vector
        if(thisLine.length() > 0)
            mFileContents.push_back( thisLine.erase(thisLine.length() - 1) );
    }
    
    // After this, mFileContents will have an extra entry and will have the value '\x04'.
    // We should remove this by popping it out the vector.
    if(mFileContents.size() > 0)
        mFileContents.pop_back();
    
    // Delete buffer created by fileContents. This part is required.
    if ( fileContents )
    {
        delete[ ] fileContents;
        fileContents = NULL;
    }
    
    // For testing purposes
    //cout << "[ NOTICE ] Finished opening file: " << pFileName.c_str( ) << endl;
}

bool FileReader::isFileExist(const char *file_name)
{
    FILE *file = fopen(file_name, "r");
    if (file != NULL)
    {
        fclose(file);
        return true;
    }
    else
    {
        return false;
    }
}

int FileReader::getLinesCount()
{
    return mFileContents.size();
}

string FileReader::getLineNumber(int line)
{
    return mFileContents[line];
}

const char * FileReader::getFileContents()
{
    return plain_file_content->c_str();
}

bool FileReader::deleteFile(const char *file_name)
{
    string fullPath = CCFileUtils::sharedFileUtils( )->fullPathForFilename(file_name);
    if( remove(fullPath.c_str()) != 0 )
        return false; // error
   
    return true;
}

FileReader::~FileReader()
{
    if(plain_file_content)
        delete plain_file_content;
}
