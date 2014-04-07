//
//  StringUtilities.cpp
//  
//
//  Created by Igor Vovk on 07.03.13.
//  Copyright (c) 2013. All rights reserved.
//

#include "cocos2d.h"
#include "StringUtilities.h"

#include <algorithm>
#include <stdio.h>
#include <sstream>
#include <iostream>

std::string cstr::stringWithFormat(const char *fmt, ...)
{
    std::string str;
	const size_t buff_size = 102400;
    
	va_list ap;
	va_start(ap, fmt);
	char* pBuf = new char[buff_size];
	if (pBuf != NULL)
	{
		vsnprintf(pBuf, buff_size, fmt, ap);
		str = pBuf;
		delete[] pBuf;
	}
	va_end(ap);
	
	return str;
}

/*std::string*/ void cstr::stringByReplacingOccurrencesString(/*const*/ std::string& source_string, const std::string& replace, const std::string& to)
{
    /*size_t old_len = replace.size();
	size_t new_len = to.size();
	size_t pos = 0;
    std::string new_str = source_string;
	while ((pos = new_str.find(replace, pos)) != std::string::npos)
	{
        cocos2d::CCLog("stringByReplacingOccurrencesString: %s", source_string.c_str());
		new_str.replace(pos, old_len, to);
		pos += new_len;
	}
    return new_str;*/
    size_t oldLen = replace.size();
	size_t newLen = to.size();
	size_t pos = 0;
	while ((pos = source_string.find(replace, pos)) != std::string::npos)
	{
		source_string.replace(pos, oldLen, to);
		pos += newLen;
	}
}

std::string cstr::toLowerCase(std::string str)
{
    std::string new_str = str;
    std::transform(new_str.begin(), new_str.end(), new_str.begin(), ::tolower);
    return new_str;
}

std::string cstr::toUpperCase(std::string str)
{
    std::string new_str = str;
    std::transform(new_str.begin(), new_str.end(), new_str.begin(), ::toupper);
    return new_str;
}

char cstr::toLowerCase(char ch)
{
    std::string res = "", str = "";
    str.append(&ch);
    std::transform(str.begin(), str.end(), res.begin(), ::tolower);
    return res[0];
}

char cstr::toUpperCase(char ch)
{
    std::string res = "", str = "";
    str.append(&ch);
    std::transform(str.begin(), str.end(), res.begin(), ::toupper);
    return res[0];
}

bool cstr::hasSufix(const char *str, const char *suff)
{
    /*int amount_of_characters = strlen(suff);
    int amount_of_characters_in_string = strlen(str);
    
    for(int i = 0; i < amount_of_characters; i++)
    {
        if(str[(amount_of_characters_in_string - amount_of_characters) + i] != suff[i])
            return false;
    }
    
    return true;*/
    
    if(strlen(suff) > strlen(str)) return false;
    
    std::string suffix = str;
    suffix = suffix.substr(suffix.length() - strlen(suff), std::string::npos);
    return (suffix.compare(suff) == 0);
    
}

std::string cstr::substringFromIndex(int idx, const std::string &str)
{
    std::string result_str = str.substr(idx, std::string::npos);
    return result_str;
}
