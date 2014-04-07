#include "HelloWorldScene.h"

USING_NS_CC;

ENCODABLE_OBJECT_DEFINE_CONSTRUCTOR(HelloWorld);//declare this for CCNSCoder

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = LabelTTF::create("Hello World", "Arial", 24);
    
    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
    
    /*create and assign test values for CCNSCoding test*/
    test_bool = false;
    test_int = 99;
    for(int i = 0; i < 7; i++)  test_vector.push_back(i);
    
    //start saving to file
    bool result = false;
    CCNSCoder *cd1 = new CCNSCoder();
    if(cd1->saveObjectToFile("LocalData", this))
        result = true;
    delete cd1;
    
    //reset test variable values
    test_bool = true;
    test_int = 0;
    test_vector.clear();
    
    //start loading from file
    CCNSCoder *cd2 = new CCNSCoder();
    if(cd2->readObjectFromFile("LocalData", this))
        result = true;
    delete cd2;
    
    /*end*/
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

#pragma mark CCNSCoding routine
void HelloWorld::encodeWithCoder(CCNSCoder *encoder)
{
    encoder->encodeBoolForKey(test_bool, "testBool");
    encoder->encodeIntForKey(test_int, "testInt");
    encoder->encodeVectorForKey(&test_vector, "testVector");
}

void HelloWorld::initWithCoder(CCNSCoder *decoder)
{
    test_bool = decoder->decodeBoolForKey("testBool");
    test_int = decoder->decodeIntForKey("testInt");
    test_vector =
    decoder->decodeVectorForKey<std::vector<int>>("testVector");
}

