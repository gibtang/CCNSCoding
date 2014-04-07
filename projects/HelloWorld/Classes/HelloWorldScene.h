#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CCNSCoder.h"

class HelloWorld : public cocos2d::Layer,
public CCNSEncodableObject//Need inherit from CCNSEncodableObject
{
public:
    /*test variables and functions for CCNSCoder*/
    ENCODABLE_OBJECT_DECLARE_CONSTRUCTOR(HelloWorld);
    virtual bool init();
    int test_int;
    bool test_bool;
    std::vector<int> test_vector;
    void initWithCoder(CCNSCoder *decoder);
    void encodeWithCoder(CCNSCoder *coder);
    /*end*/
    
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();


    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    // a selector callback
    void menuCloseCallback(Object* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
