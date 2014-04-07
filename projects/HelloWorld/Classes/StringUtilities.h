//
//  StringUtilities.h
//
//
//  Created by Igor Vovk on 07.03.13.
//  Copyright (c) 2013 All rights reserved.
//

#ifndef __StringUtilities__
#define __StringUtilities__

#include <vector>

namespace cstr
{
    std::string stringWithFormat(const char *fmt, ...);
    /*std::string*/ void stringByReplacingOccurrencesString(/*const*/ std::string & source_string, const std::string& replace, const std::string& to);
    
    std::string toLowerCase(std::string str);
    std::string toUpperCase(std::string str);
    
    char toLowerCase(char ch);
    char toUpperCase(char ch);    
    inline bool hasPrefix(const char *str, const char *pref) { return strncmp(str, pref, strlen(pref)) == 0; }
    bool hasSufix(const char *str, const char *suff);
    
    inline bool isStringsEqual(const char *str1, const char *str2) { return (strcmp(str1, str2) == 0); }
    std::string substringFromIndex(int idx, const std::string &str);

}

#endif /* defined(__StringUtilities__) */
