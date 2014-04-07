//
//  FileReader.h
//  
//
//  Created by Igor Vovk on 07.03.13.
//  Copyright (c) 2013. All rights reserved.
//

#ifndef __FileReader__
#define __FileReader__

#include <iostream>

#include "cocos2d.h"


class FileReader
{
private:
    std::vector< std::string > mFileContents;
    std::string *plain_file_content;
    
public:
    FileReader(const char *file_name, char p_mode = 'r');
    ~FileReader();
    
    static bool isFileExist(const char *file_name);
    
    int getLinesCount();
    std::string getLineNumber(int line);
    const char * getFileContents();
    static bool deleteFile(const char *file_name);
};

#endif /* defined(__FileReader__) */
