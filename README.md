This is a C++ implementation of the NSCoding protocol for cocos2d-x as we miss NSCoding when we were doing some game development using cocos2d-x.

All data is stored in json format and we use Rapidjson for parsing 
https://code.google.com/p/rapidjson/

Files needed are
CCNSCoder.h/cpp
FileReader.h/cpp
StringUtilities.h/cpp

Go to /projects/HelloWorld/proj.ios_mac/ and open the xcodeproj file to run it. The project should run out of the box and the code that implements the CCNSCoding is in HelloWorldScene.h/cpp

Hope you enjoy this

