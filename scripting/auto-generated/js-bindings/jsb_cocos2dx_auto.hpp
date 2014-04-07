#ifndef __cocos2dx_h__
#define __cocos2dx_h__

#include "jsapi.h"
#include "jsfriendapi.h"


extern JSClass  *jsb_Action_class;
extern JSObject *jsb_Action_prototype;

JSBool js_cocos2dx_Action_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Action_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Action(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Action_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_setOriginalTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_getOriginalTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_getTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_setTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_getTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_setTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Action_reverse(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FiniteTimeAction_class;
extern JSObject *jsb_FiniteTimeAction_prototype;

JSBool js_cocos2dx_FiniteTimeAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FiniteTimeAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FiniteTimeAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FiniteTimeAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FiniteTimeAction_setDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FiniteTimeAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FiniteTimeAction_getDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Speed_class;
extern JSObject *jsb_Speed_prototype;

JSBool js_cocos2dx_Speed_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Speed_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Speed(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Speed_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_getSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_setSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Speed_Speed(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Follow_class;
extern JSObject *jsb_Follow_prototype;

JSBool js_cocos2dx_Follow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Follow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Follow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Follow_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_initWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_setBoudarySet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_isBoundarySet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Follow_Follow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_GLProgram_class;
extern JSObject *jsb_GLProgram_prototype;

JSBool js_cocos2dx_GLProgram_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_GLProgram_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_GLProgram(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_GLProgram_getFragmentShaderLog(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_addAttribute(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_getUniformLocationForName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_use(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_getVertexShaderLog(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_initWithVertexShaderByteArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_initWithVertexShaderFilename(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformsForBuiltins(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith3i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith3iv(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_updateUniforms(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith4iv(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_link(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith2iv(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_reset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith4i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith1i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_setUniformLocationWith2i(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GLProgram_GLProgram(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Touch_class;
extern JSObject *jsb_Touch_prototype;

JSBool js_cocos2dx_Touch_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Touch_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Touch(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Touch_getPreviousLocationInView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getLocation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getDelta(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getStartLocationInView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getStartLocation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_setTouchInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getLocationInView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_getPreviousLocation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Touch_Touch(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Set_class;
extern JSObject *jsb_Set_prototype;

JSBool js_cocos2dx_Set_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Set_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Set(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Set_count(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_addObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_mutableCopy(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_anyObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_removeAllObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_removeObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_copy(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_containsObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Set_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Texture2D_class;
extern JSObject *jsb_Texture2D_prototype;

JSBool js_cocos2dx_Texture2D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Texture2D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Texture2D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Texture2D_getShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getMaxT(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getStringForFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_initWithImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getMaxS(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_hasPremultipliedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getPixelsHigh(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_initWithMipmaps(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getBitsPerPixelForFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setMaxT(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_drawInRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setAliasTexParameters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setAntiAliasTexParameters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_generateMipmap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getContentSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getPixelsWide(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_drawAtPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_hasMipmaps(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setMaxS(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_setDefaultAlphaPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getPixelFormatInfoMap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_getDefaultAlphaPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_PVRImagesHavePremultipliedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Texture2D_Texture2D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Node_class;
extern JSObject *jsb_Node_prototype;

JSBool js_cocos2dx_Node_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Node_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Node(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Node_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeComponent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertToWorldSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_isIgnoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeAllComponents(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getNodeToWorldTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertToWorldSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertTouchToNodeSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setParent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getNodeToParentTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertToNodeSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_stopActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_ignoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setPositionY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setPositionX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getNumberOfRunningActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_updateTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_isVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getChildrenCount(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertToNodeSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_addComponent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_resumeSchedulerAndActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getAnchorPointInPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_runAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_transform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_stopAllActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setAdditionalTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_isRunning(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getParent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getPositionY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getPositionX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeChildByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getParentToNodeTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_pauseSchedulerAndActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node__setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getChildByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_cleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getComponent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getBoundingBox(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_transformAncestors(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setUserObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_removeFromParentAndCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_convertTouchToNodeSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getWorldToNodeTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getCamera(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_setTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_stopAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_getActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Node_Node(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_NodeRGBA_class;
extern JSObject *jsb_NodeRGBA_prototype;

JSBool js_cocos2dx_NodeRGBA_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_NodeRGBA_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_NodeRGBA(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_NodeRGBA_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_isCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_getDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_setCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_setCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_isCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_NodeRGBA_NodeRGBA(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SpriteFrame_class;
extern JSObject *jsb_SpriteFrame_prototype;

JSBool js_cocos2dx_SpriteFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SpriteFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SpriteFrame(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SpriteFrame_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setRectInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setOffsetInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getRectInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setOriginalSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getOriginalSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setOriginalSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_isRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_initWithTextureFilename(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_setRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getOffsetInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_getOriginalSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrame_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_AnimationFrame_class;
extern JSObject *jsb_AnimationFrame_prototype;

JSBool js_cocos2dx_AnimationFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_AnimationFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_AnimationFrame(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_AnimationFrame_setSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_getUserInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_setDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_getSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_getDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_setUserInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_initWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationFrame_AnimationFrame(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Animation_class;
extern JSObject *jsb_Animation_prototype;

JSBool js_cocos2dx_Animation_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Animation_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Animation(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Animation_getLoops(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_getFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_addSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_setRestoreOriginalFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_setDelayPerUnit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_initWithAnimationFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_initWithSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_setLoops(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_addSpriteFrameWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_getTotalDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_getDelayPerUnit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_getRestoreOriginalFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_addSpriteFrameWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animation_Animation(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionInterval_class;
extern JSObject *jsb_ActionInterval_prototype;

JSBool js_cocos2dx_ActionInterval_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionInterval_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionInterval(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionInterval_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_getElapsed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInterval_reverse(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Sequence_class;
extern JSObject *jsb_Sequence_prototype;

JSBool js_cocos2dx_Sequence_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Sequence_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Sequence(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Sequence_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sequence_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sequence_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sequence_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sequence_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sequence_initWithTwoActions(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Repeat_class;
extern JSObject *jsb_Repeat_prototype;

JSBool js_cocos2dx_Repeat_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Repeat_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Repeat(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Repeat_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Repeat_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RepeatForever_class;
extern JSObject *jsb_RepeatForever_prototype;

JSBool js_cocos2dx_RepeatForever_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_RepeatForever_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_RepeatForever(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_RepeatForever_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RepeatForever_RepeatForever(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Spawn_class;
extern JSObject *jsb_Spawn_prototype;

JSBool js_cocos2dx_Spawn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Spawn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Spawn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Spawn_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Spawn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Spawn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Spawn_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Spawn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Spawn_initWithTwoActions(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RotateTo_class;
extern JSObject *jsb_RotateTo_prototype;

JSBool js_cocos2dx_RotateTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_RotateTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_RotateTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_RotateTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RotateBy_class;
extern JSObject *jsb_RotateBy_prototype;

JSBool js_cocos2dx_RotateBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_RotateBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_RotateBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_RotateBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RotateBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MoveBy_class;
extern JSObject *jsb_MoveBy_prototype;

JSBool js_cocos2dx_MoveBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MoveBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MoveBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MoveBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MoveTo_class;
extern JSObject *jsb_MoveTo_prototype;

JSBool js_cocos2dx_MoveTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MoveTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MoveTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MoveTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MoveTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SkewTo_class;
extern JSObject *jsb_SkewTo_prototype;

JSBool js_cocos2dx_SkewTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SkewTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SkewTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SkewTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewTo_SkewTo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SkewBy_class;
extern JSObject *jsb_SkewBy_prototype;

JSBool js_cocos2dx_SkewBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SkewBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SkewBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SkewBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SkewBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_JumpBy_class;
extern JSObject *jsb_JumpBy_prototype;

JSBool js_cocos2dx_JumpBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_JumpBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_JumpBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_JumpBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_JumpTo_class;
extern JSObject *jsb_JumpTo_prototype;

JSBool js_cocos2dx_JumpTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_JumpTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_JumpTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_JumpTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_BezierBy_class;
extern JSObject *jsb_BezierBy_prototype;

JSBool js_cocos2dx_BezierBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_BezierBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_BezierBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_BezierBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierBy_update(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_BezierTo_class;
extern JSObject *jsb_BezierTo_prototype;

JSBool js_cocos2dx_BezierTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_BezierTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_BezierTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_BezierTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_BezierTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ScaleTo_class;
extern JSObject *jsb_ScaleTo_prototype;

JSBool js_cocos2dx_ScaleTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ScaleTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ScaleTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ScaleTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ScaleBy_class;
extern JSObject *jsb_ScaleBy_prototype;

JSBool js_cocos2dx_ScaleBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ScaleBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ScaleBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ScaleBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ScaleBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Blink_class;
extern JSObject *jsb_Blink_prototype;

JSBool js_cocos2dx_Blink_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Blink_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Blink(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Blink_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Blink_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeIn_class;
extern JSObject *jsb_FadeIn_prototype;

JSBool js_cocos2dx_FadeIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeOut_class;
extern JSObject *jsb_FadeOut_prototype;

JSBool js_cocos2dx_FadeOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeTo_class;
extern JSObject *jsb_FadeTo_prototype;

JSBool js_cocos2dx_FadeTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TintTo_class;
extern JSObject *jsb_TintTo_prototype;

JSBool js_cocos2dx_TintTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TintTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TintTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TintTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TintBy_class;
extern JSObject *jsb_TintBy_prototype;

JSBool js_cocos2dx_TintBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TintBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TintBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TintBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TintBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_DelayTime_class;
extern JSObject *jsb_DelayTime_prototype;

JSBool js_cocos2dx_DelayTime_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_DelayTime_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_DelayTime(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_DelayTime_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DelayTime_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DelayTime_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DelayTime_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Animate_class;
extern JSObject *jsb_Animate_prototype;

JSBool js_cocos2dx_Animate_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Animate_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Animate(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Animate_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_getAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_initWithAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_setAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Animate_Animate(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TargetedAction_class;
extern JSObject *jsb_TargetedAction_prototype;

JSBool js_cocos2dx_TargetedAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TargetedAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TargetedAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TargetedAction_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_setForcedTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_initWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_getForcedTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TargetedAction_TargetedAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionCamera_class;
extern JSObject *jsb_ActionCamera_prototype;

JSBool js_cocos2dx_ActionCamera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionCamera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionCamera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionCamera_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionCamera_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionCamera_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionCamera_ActionCamera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_OrbitCamera_class;
extern JSObject *jsb_OrbitCamera_prototype;

JSBool js_cocos2dx_OrbitCamera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_OrbitCamera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_OrbitCamera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_OrbitCamera_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_sphericalRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_OrbitCamera_OrbitCamera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionManager_class;
extern JSObject *jsb_ActionManager_prototype;

JSBool js_cocos2dx_ActionManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionManager(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionManager_getActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_removeActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_removeAllActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_addAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_resumeTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_getNumberOfRunningActionsInTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_removeAllActionsFromTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_resumeTargets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_removeAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_pauseTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_pauseAllRunningActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionManager_ActionManager(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionEase_class;
extern JSObject *jsb_ActionEase_prototype;

JSBool js_cocos2dx_ActionEase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionEase_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionEase(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionEase_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionEase_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseRateAction_class;
extern JSObject *jsb_EaseRateAction_prototype;

JSBool js_cocos2dx_EaseRateAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseRateAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseRateAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseRateAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseRateAction_setRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseRateAction_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseRateAction_getRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseRateAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseIn_class;
extern JSObject *jsb_EaseIn_prototype;

JSBool js_cocos2dx_EaseIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseOut_class;
extern JSObject *jsb_EaseOut_prototype;

JSBool js_cocos2dx_EaseOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseInOut_class;
extern JSObject *jsb_EaseInOut_prototype;

JSBool js_cocos2dx_EaseInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseExponentialIn_class;
extern JSObject *jsb_EaseExponentialIn_prototype;

JSBool js_cocos2dx_EaseExponentialIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseExponentialIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseExponentialIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseExponentialIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseExponentialOut_class;
extern JSObject *jsb_EaseExponentialOut_prototype;

JSBool js_cocos2dx_EaseExponentialOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseExponentialOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseExponentialOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseExponentialOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseExponentialInOut_class;
extern JSObject *jsb_EaseExponentialInOut_prototype;

JSBool js_cocos2dx_EaseExponentialInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseExponentialInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseExponentialInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseExponentialInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseExponentialInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseSineIn_class;
extern JSObject *jsb_EaseSineIn_prototype;

JSBool js_cocos2dx_EaseSineIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseSineIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseSineIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseSineIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseSineOut_class;
extern JSObject *jsb_EaseSineOut_prototype;

JSBool js_cocos2dx_EaseSineOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseSineOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseSineOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseSineOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseSineInOut_class;
extern JSObject *jsb_EaseSineInOut_prototype;

JSBool js_cocos2dx_EaseSineInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseSineInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseSineInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseSineInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseSineInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseElastic_class;
extern JSObject *jsb_EaseElastic_prototype;

JSBool js_cocos2dx_EaseElastic_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseElastic_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseElastic(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseElastic_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElastic_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElastic_setPeriod(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElastic_getPeriod(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElastic_reverse(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseElasticIn_class;
extern JSObject *jsb_EaseElasticIn_prototype;

JSBool js_cocos2dx_EaseElasticIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseElasticIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseElasticIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseElasticIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseElasticOut_class;
extern JSObject *jsb_EaseElasticOut_prototype;

JSBool js_cocos2dx_EaseElasticOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseElasticOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseElasticOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseElasticOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseElasticInOut_class;
extern JSObject *jsb_EaseElasticInOut_prototype;

JSBool js_cocos2dx_EaseElasticInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseElasticInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseElasticInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseElasticInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseElasticInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBounce_class;
extern JSObject *jsb_EaseBounce_prototype;

JSBool js_cocos2dx_EaseBounce_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBounce_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBounce(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBounce_bounceTime(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounce_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounce_reverse(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBounceIn_class;
extern JSObject *jsb_EaseBounceIn_prototype;

JSBool js_cocos2dx_EaseBounceIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBounceIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBounceIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBounceIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBounceOut_class;
extern JSObject *jsb_EaseBounceOut_prototype;

JSBool js_cocos2dx_EaseBounceOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBounceOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBounceOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBounceOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBounceInOut_class;
extern JSObject *jsb_EaseBounceInOut_prototype;

JSBool js_cocos2dx_EaseBounceInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBounceInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBounceInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBounceInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBounceInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBackIn_class;
extern JSObject *jsb_EaseBackIn_prototype;

JSBool js_cocos2dx_EaseBackIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBackIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBackIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBackIn_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBackOut_class;
extern JSObject *jsb_EaseBackOut_prototype;

JSBool js_cocos2dx_EaseBackOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBackOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBackOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBackOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EaseBackInOut_class;
extern JSObject *jsb_EaseBackInOut_prototype;

JSBool js_cocos2dx_EaseBackInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_EaseBackInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_EaseBackInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_EaseBackInOut_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_EaseBackInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionInstant_class;
extern JSObject *jsb_ActionInstant_prototype;

JSBool js_cocos2dx_ActionInstant_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionInstant_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionInstant(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionInstant_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInstant_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInstant_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInstant_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionInstant_update(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Show_class;
extern JSObject *jsb_Show_prototype;

JSBool js_cocos2dx_Show_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Show_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Show(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Show_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Show_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Show_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Show_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Show_Show(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Hide_class;
extern JSObject *jsb_Hide_prototype;

JSBool js_cocos2dx_Hide_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Hide_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Hide(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Hide_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Hide_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Hide_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Hide_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Hide_Hide(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ToggleVisibility_class;
extern JSObject *jsb_ToggleVisibility_prototype;

JSBool js_cocos2dx_ToggleVisibility_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ToggleVisibility_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ToggleVisibility(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ToggleVisibility_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ToggleVisibility_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ToggleVisibility_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ToggleVisibility_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ToggleVisibility_ToggleVisibility(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RemoveSelf_class;
extern JSObject *jsb_RemoveSelf_prototype;

JSBool js_cocos2dx_RemoveSelf_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_RemoveSelf_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_RemoveSelf(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_RemoveSelf_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RemoveSelf_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RemoveSelf_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RemoveSelf_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RemoveSelf_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RemoveSelf_RemoveSelf(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FlipX_class;
extern JSObject *jsb_FlipX_prototype;

JSBool js_cocos2dx_FlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FlipX_initWithFlipX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX_FlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FlipY_class;
extern JSObject *jsb_FlipY_prototype;

JSBool js_cocos2dx_FlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FlipY_initWithFlipY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY_FlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Place_class;
extern JSObject *jsb_Place_prototype;

JSBool js_cocos2dx_Place_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Place_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Place(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Place_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Place_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Place_initWithPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Place_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Place_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Place_Place(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CallFunc_class;
extern JSObject *jsb_CallFunc_prototype;

JSBool js_cocos2dx_CallFunc_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CallFunc_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CallFunc(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CallFunc_execute(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_getTargetCallback(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_setTargetCallback(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CallFunc_CallFunc(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_GridAction_class;
extern JSObject *jsb_GridAction_prototype;

JSBool js_cocos2dx_GridAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_GridAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_GridAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_GridAction_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridAction_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Grid3DAction_class;
extern JSObject *jsb_Grid3DAction_prototype;

JSBool js_cocos2dx_Grid3DAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Grid3DAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Grid3DAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Grid3DAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Grid3DAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TiledGrid3DAction_class;
extern JSObject *jsb_TiledGrid3DAction_prototype;

JSBool js_cocos2dx_TiledGrid3DAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TiledGrid3DAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TiledGrid3DAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TiledGrid3DAction_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TiledGrid3DAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_StopGrid_class;
extern JSObject *jsb_StopGrid_prototype;

JSBool js_cocos2dx_StopGrid_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_StopGrid_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_StopGrid(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_StopGrid_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_StopGrid_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_StopGrid_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_StopGrid_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ReuseGrid_class;
extern JSObject *jsb_ReuseGrid_prototype;

JSBool js_cocos2dx_ReuseGrid_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ReuseGrid_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ReuseGrid(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ReuseGrid_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ReuseGrid_initWithTimes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ReuseGrid_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ReuseGrid_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ReuseGrid_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Waves3D_class;
extern JSObject *jsb_Waves3D_prototype;

JSBool js_cocos2dx_Waves3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Waves3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Waves3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Waves3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FlipX3D_class;
extern JSObject *jsb_FlipX3D_prototype;

JSBool js_cocos2dx_FlipX3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FlipX3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FlipX3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FlipX3D_initWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipX3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FlipY3D_class;
extern JSObject *jsb_FlipY3D_prototype;

JSBool js_cocos2dx_FlipY3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FlipY3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FlipY3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FlipY3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FlipY3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Lens3D_class;
extern JSObject *jsb_Lens3D_prototype;

JSBool js_cocos2dx_Lens3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Lens3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Lens3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Lens3D_setConcave(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_setLensEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_getLensEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Lens3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Ripple3D_class;
extern JSObject *jsb_Ripple3D_prototype;

JSBool js_cocos2dx_Ripple3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Ripple3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Ripple3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Ripple3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Ripple3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Shaky3D_class;
extern JSObject *jsb_Shaky3D_prototype;

JSBool js_cocos2dx_Shaky3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Shaky3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Shaky3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Shaky3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Shaky3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Shaky3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Shaky3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Liquid_class;
extern JSObject *jsb_Liquid_prototype;

JSBool js_cocos2dx_Liquid_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Liquid_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Liquid(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Liquid_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Liquid_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Waves_class;
extern JSObject *jsb_Waves_prototype;

JSBool js_cocos2dx_Waves_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Waves_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Waves(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Waves_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Waves_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Twirl_class;
extern JSObject *jsb_Twirl_prototype;

JSBool js_cocos2dx_Twirl_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Twirl_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Twirl(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Twirl_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Twirl_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_PageTurn3D_class;
extern JSObject *jsb_PageTurn3D_prototype;

JSBool js_cocos2dx_PageTurn3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_PageTurn3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_PageTurn3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_PageTurn3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_PageTurn3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_PageTurn3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ProgressTo_class;
extern JSObject *jsb_ProgressTo_prototype;

JSBool js_cocos2dx_ProgressTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ProgressTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ProgressTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ProgressTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ProgressFromTo_class;
extern JSObject *jsb_ProgressFromTo_prototype;

JSBool js_cocos2dx_ProgressFromTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ProgressFromTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ProgressFromTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ProgressFromTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressFromTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressFromTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressFromTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressFromTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressFromTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ShakyTiles3D_class;
extern JSObject *jsb_ShakyTiles3D_prototype;

JSBool js_cocos2dx_ShakyTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ShakyTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ShakyTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ShakyTiles3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShakyTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShakyTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShakyTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ShatteredTiles3D_class;
extern JSObject *jsb_ShatteredTiles3D_prototype;

JSBool js_cocos2dx_ShatteredTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ShatteredTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ShatteredTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ShatteredTiles3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShatteredTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShatteredTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShatteredTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ShuffleTiles_class;
extern JSObject *jsb_ShuffleTiles_prototype;

JSBool js_cocos2dx_ShuffleTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ShuffleTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ShuffleTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ShuffleTiles_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_placeTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_getDelta(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_shuffle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShuffleTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeOutTRTiles_class;
extern JSObject *jsb_FadeOutTRTiles_prototype;

JSBool js_cocos2dx_FadeOutTRTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeOutTRTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeOutTRTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeOutTRTiles_turnOnTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_turnOffTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_transformTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutTRTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeOutBLTiles_class;
extern JSObject *jsb_FadeOutBLTiles_prototype;

JSBool js_cocos2dx_FadeOutBLTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeOutBLTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeOutBLTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeOutBLTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutBLTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutBLTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeOutUpTiles_class;
extern JSObject *jsb_FadeOutUpTiles_prototype;

JSBool js_cocos2dx_FadeOutUpTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeOutUpTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeOutUpTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeOutUpTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutUpTiles_transformTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutUpTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutUpTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FadeOutDownTiles_class;
extern JSObject *jsb_FadeOutDownTiles_prototype;

JSBool js_cocos2dx_FadeOutDownTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FadeOutDownTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FadeOutDownTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FadeOutDownTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutDownTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FadeOutDownTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TurnOffTiles_class;
extern JSObject *jsb_TurnOffTiles_prototype;

JSBool js_cocos2dx_TurnOffTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TurnOffTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TurnOffTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TurnOffTiles_turnOnTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_turnOffTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_shuffle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TurnOffTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_WavesTiles3D_class;
extern JSObject *jsb_WavesTiles3D_prototype;

JSBool js_cocos2dx_WavesTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_WavesTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_WavesTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_WavesTiles3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_WavesTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_JumpTiles3D_class;
extern JSObject *jsb_JumpTiles3D_prototype;

JSBool js_cocos2dx_JumpTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_JumpTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_JumpTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_JumpTiles3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_JumpTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SplitRows_class;
extern JSObject *jsb_SplitRows_prototype;

JSBool js_cocos2dx_SplitRows_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SplitRows_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SplitRows(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SplitRows_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitRows_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitRows_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitRows_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitRows_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SplitCols_class;
extern JSObject *jsb_SplitCols_prototype;

JSBool js_cocos2dx_SplitCols_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SplitCols_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SplitCols(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SplitCols_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitCols_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitCols_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitCols_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SplitCols_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ActionTween_class;
extern JSObject *jsb_ActionTween_prototype;

JSBool js_cocos2dx_ActionTween_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ActionTween_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ActionTween(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ActionTween_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionTween_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionTween_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionTween_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionTween_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ActionTween_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CardinalSplineTo_class;
extern JSObject *jsb_CardinalSplineTo_prototype;

JSBool js_cocos2dx_CardinalSplineTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CardinalSplineTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CardinalSplineTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CardinalSplineTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_getPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_updatePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineTo_CardinalSplineTo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CardinalSplineBy_class;
extern JSObject *jsb_CardinalSplineBy_prototype;

JSBool js_cocos2dx_CardinalSplineBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CardinalSplineBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CardinalSplineBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CardinalSplineBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineBy_updatePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CardinalSplineBy_CardinalSplineBy(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CatmullRomTo_class;
extern JSObject *jsb_CatmullRomTo_prototype;

JSBool js_cocos2dx_CatmullRomTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CatmullRomTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CatmullRomTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CatmullRomTo_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CatmullRomTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CatmullRomTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CatmullRomBy_class;
extern JSObject *jsb_CatmullRomBy_prototype;

JSBool js_cocos2dx_CatmullRomBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CatmullRomBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CatmullRomBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CatmullRomBy_clone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CatmullRomBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CatmullRomBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_AtlasNode_class;
extern JSObject *jsb_AtlasNode_prototype;

JSBool js_cocos2dx_AtlasNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_AtlasNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_AtlasNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_AtlasNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_updateAtlasValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_getQuadsToDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_initWithTileFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_setQuadsToDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AtlasNode_AtlasNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_DrawNode_class;
extern JSObject *jsb_DrawNode_prototype;

JSBool js_cocos2dx_DrawNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_DrawNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_DrawNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_DrawNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_clear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_drawDot(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_drawSegment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_DrawNode_DrawNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Camera_class;
extern JSObject *jsb_Camera_prototype;

JSBool js_cocos2dx_Camera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Camera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Camera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Camera_locate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_restore(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_setEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_setCenter(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_getCenter(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_isDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_setDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_setUp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_getUp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_getEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_getZEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Camera_Camera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LabelAtlas_class;
extern JSObject *jsb_LabelAtlas_prototype;

JSBool js_cocos2dx_LabelAtlas_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LabelAtlas_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LabelAtlas(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LabelAtlas_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelAtlas_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelAtlas_updateAtlasValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelAtlas_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelAtlas_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelAtlas_LabelAtlas(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Director_class;
extern JSObject *jsb_Director_prototype;

JSBool js_cocos2dx_Director_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Director_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Director(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Director_pause(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setNotificationNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setContentScaleFactor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getContentScaleFactor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getWinSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getDeltaTime(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setGLDefaultValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setAlphaBlending(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_popToRootScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getNotificationNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getWinSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_isSendCleanupToScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getVisibleOrigin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_mainLoop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setDepthTest(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getSecondsPerFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_convertToUI(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setDefaultValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_startAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getRunningScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setViewport(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_stopAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_popToSceneStackLevel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_resume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_isNextDeltaTimeZero(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setOpenGLView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_convertToGL(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_purgeCachedData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getTotalFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_runWithScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_drawScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_popScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_isDisplayStats(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setProjection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getZEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setNextDeltaTimeZero(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getVisibleSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_pushScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getAnimationInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_isPaused(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setDisplayStats(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_replaceScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_setAnimationInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Director_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_GridBase_class;
extern JSObject *jsb_GridBase_prototype;

JSBool js_cocos2dx_GridBase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_GridBase_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_GridBase(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_GridBase_setGridSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_calculateVertexPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_afterDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_beforeDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_isTextureFlipped(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_getGridSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_getStep(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_set2DProjection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_setStep(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_setTextureFlipped(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_blit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_setActive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_getReuseGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_initWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_setReuseGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_isActive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_reuse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_GridBase_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Grid3D_class;
extern JSObject *jsb_Grid3D_prototype;

JSBool js_cocos2dx_Grid3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Grid3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Grid3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Grid3D_calculateVertexPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Grid3D_reuse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Grid3D_blit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Grid3D_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Grid3D_Grid3D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TiledGrid3D_class;
extern JSObject *jsb_TiledGrid3D_prototype;

JSBool js_cocos2dx_TiledGrid3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TiledGrid3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TiledGrid3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TiledGrid3D_calculateVertexPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TiledGrid3D_reuse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TiledGrid3D_blit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TiledGrid3D_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TiledGrid3D_TiledGrid3D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Sprite_class;
extern JSObject *jsb_Sprite_prototype;

JSBool js_cocos2dx_Sprite_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Sprite_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Sprite(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Sprite_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isFlippedX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setFlippedY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setFlippedX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setDisplayFrameWithAnimationName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getOffsetPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setPhysicsBody(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_initWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setTextureRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isFrameDisplayed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setDisplayFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getPhysicsBody(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isTextureRectRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getTextureRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_ignoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_getDisplayFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_initWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_updateTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_isFlippedY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setVertexRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_setVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_createWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_createWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Sprite_Sprite(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LabelTTF_class;
extern JSObject *jsb_LabelTTF_prototype;

JSBool js_cocos2dx_LabelTTF_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LabelTTF_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LabelTTF(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LabelTTF_enableShadow(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setDimensions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setTextDefinition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getHorizontalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_initWithStringAndTextDefinition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setFontFillColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_enableStroke(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getDimensions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setVerticalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getVerticalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getTextDefinition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_getFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_setHorizontalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_disableShadow(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_disableStroke(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_createWithFontDefinition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelTTF_LabelTTF(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SpriteBatchNode_class;
extern JSObject *jsb_SpriteBatchNode_prototype;

JSBool js_cocos2dx_SpriteBatchNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SpriteBatchNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SpriteBatchNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SpriteBatchNode_appendChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_reorderBatch(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_removeChildAtIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_removeSpriteFromAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_atlasIndexForChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_increaseAtlasCapacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_lowestAtlasIndexInChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_rebuildIndexInOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_highestAtlasIndexInChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteBatchNode_SpriteBatchNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LabelBMFont_class;
extern JSObject *jsb_LabelBMFont_prototype;

JSBool js_cocos2dx_LabelBMFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LabelBMFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LabelBMFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LabelBMFont_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_createFontChars(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getFntFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_updateLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_isCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setFntFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setLineBreakWithoutSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_isCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setCString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_setAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_purgeCachedData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LabelBMFont_LabelBMFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Label_class;
extern JSObject *jsb_Label_prototype;

JSBool js_cocos2dx_Label_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Label_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Label(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Label_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getLetterPosXRight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getCommonLineHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getLabelContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_breakLineWithoutSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getMaxLineWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getRectForChar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getAdvanceForChar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_isCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getYOffsetForChar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getXOffsetForChar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getSpriteForChar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getChildrenLetters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setLineBreakWithoutSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getStringNumLines(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getCharAtStringPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getStringLenght(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getLetterPosXLeft(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getKerningForCharsPair(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setLabelContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_assignNewUTF8String(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setText(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getUTF8String(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getTextAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_getSpriteChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_isCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_setAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_createWithBMFont(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Label_createWithTTF(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Layer_class;
extern JSObject *jsb_Layer_prototype;

JSBool js_cocos2dx_Layer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Layer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Layer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Layer_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_isKeyboardEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setAccelerometerInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_isSwallowsTouches(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_getTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_isTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setKeyboardEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_isAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setSwallowsTouches(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_setAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Layer_Layer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LayerRGBA_class;
extern JSObject *jsb_LayerRGBA_prototype;

JSBool js_cocos2dx_LayerRGBA_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LayerRGBA_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LayerRGBA(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LayerRGBA_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_isCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_getDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_setCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_setCascadeOpacityEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_isCascadeColorEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerRGBA_LayerRGBA(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LayerColor_class;
extern JSObject *jsb_LayerColor_prototype;

JSBool js_cocos2dx_LayerColor_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LayerColor_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LayerColor(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LayerColor_changeWidthAndHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_initWithColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_changeWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_setContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_changeHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerColor_LayerColor(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LayerGradient_class;
extern JSObject *jsb_LayerGradient_prototype;

JSBool js_cocos2dx_LayerGradient_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LayerGradient_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LayerGradient(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LayerGradient_getStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_isCompressedInterpolation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_getStartOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setVector(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setStartOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setCompressedInterpolation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setEndOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_getVector(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_initWithColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_getEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_getEndOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_setStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerGradient_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_LayerMultiplex_class;
extern JSObject *jsb_LayerMultiplex_prototype;

JSBool js_cocos2dx_LayerMultiplex_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_LayerMultiplex_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_LayerMultiplex(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_LayerMultiplex_initWithArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerMultiplex_switchToAndReleaseMe(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerMultiplex_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerMultiplex_addLayer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerMultiplex_switchTo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_LayerMultiplex_LayerMultiplex(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Scene_class;
extern JSObject *jsb_Scene_prototype;

JSBool js_cocos2dx_Scene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Scene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Scene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Scene_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_initWithPhysics(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_getPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_createWithPhysics(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scene_Scene(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionEaseScene_class;
extern JSObject *jsb_TransitionEaseScene_prototype;

JSBool js_cocos2dx_TransitionEaseScene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionEaseScene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionEaseScene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionEaseScene_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionScene_class;
extern JSObject *jsb_TransitionScene_prototype;

JSBool js_cocos2dx_TransitionScene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionScene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionScene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionScene_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_finish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_cleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_hideOutShowIn(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionScene_TransitionScene(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSceneOriented_class;
extern JSObject *jsb_TransitionSceneOriented_prototype;

JSBool js_cocos2dx_TransitionSceneOriented_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSceneOriented_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSceneOriented(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSceneOriented_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSceneOriented_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSceneOriented_TransitionSceneOriented(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionRotoZoom_class;
extern JSObject *jsb_TransitionRotoZoom_prototype;

JSBool js_cocos2dx_TransitionRotoZoom_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionRotoZoom_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionRotoZoom(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionRotoZoom_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionRotoZoom_TransitionRotoZoom(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionJumpZoom_class;
extern JSObject *jsb_TransitionJumpZoom_prototype;

JSBool js_cocos2dx_TransitionJumpZoom_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionJumpZoom_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionJumpZoom(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionJumpZoom_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionJumpZoom_TransitionJumpZoom(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionMoveInL_class;
extern JSObject *jsb_TransitionMoveInL_prototype;

JSBool js_cocos2dx_TransitionMoveInL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionMoveInL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionMoveInL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionMoveInL_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInL_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInL_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInL_TransitionMoveInL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionMoveInR_class;
extern JSObject *jsb_TransitionMoveInR_prototype;

JSBool js_cocos2dx_TransitionMoveInR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionMoveInR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionMoveInR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionMoveInR_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInR_TransitionMoveInR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionMoveInT_class;
extern JSObject *jsb_TransitionMoveInT_prototype;

JSBool js_cocos2dx_TransitionMoveInT_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionMoveInT_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionMoveInT(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionMoveInT_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInT_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInT_TransitionMoveInT(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionMoveInB_class;
extern JSObject *jsb_TransitionMoveInB_prototype;

JSBool js_cocos2dx_TransitionMoveInB_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionMoveInB_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionMoveInB(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionMoveInB_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInB_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionMoveInB_TransitionMoveInB(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSlideInL_class;
extern JSObject *jsb_TransitionSlideInL_prototype;

JSBool js_cocos2dx_TransitionSlideInL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSlideInL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSlideInL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSlideInL_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInL_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInL_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInL_TransitionSlideInL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSlideInR_class;
extern JSObject *jsb_TransitionSlideInR_prototype;

JSBool js_cocos2dx_TransitionSlideInR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSlideInR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSlideInR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSlideInR_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInR_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInR_TransitionSlideInR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSlideInB_class;
extern JSObject *jsb_TransitionSlideInB_prototype;

JSBool js_cocos2dx_TransitionSlideInB_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSlideInB_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSlideInB(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSlideInB_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInB_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInB_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInB_TransitionSlideInB(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSlideInT_class;
extern JSObject *jsb_TransitionSlideInT_prototype;

JSBool js_cocos2dx_TransitionSlideInT_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSlideInT_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSlideInT(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSlideInT_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInT_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInT_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSlideInT_TransitionSlideInT(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionShrinkGrow_class;
extern JSObject *jsb_TransitionShrinkGrow_prototype;

JSBool js_cocos2dx_TransitionShrinkGrow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionShrinkGrow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionShrinkGrow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionShrinkGrow_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionShrinkGrow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionShrinkGrow_TransitionShrinkGrow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFlipX_class;
extern JSObject *jsb_TransitionFlipX_prototype;

JSBool js_cocos2dx_TransitionFlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFlipX_TransitionFlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFlipY_class;
extern JSObject *jsb_TransitionFlipY_prototype;

JSBool js_cocos2dx_TransitionFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFlipY_TransitionFlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFlipAngular_class;
extern JSObject *jsb_TransitionFlipAngular_prototype;

JSBool js_cocos2dx_TransitionFlipAngular_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFlipAngular_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFlipAngular(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFlipAngular_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFlipAngular_TransitionFlipAngular(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionZoomFlipX_class;
extern JSObject *jsb_TransitionZoomFlipX_prototype;

JSBool js_cocos2dx_TransitionZoomFlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionZoomFlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionZoomFlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionZoomFlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionZoomFlipX_TransitionZoomFlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionZoomFlipY_class;
extern JSObject *jsb_TransitionZoomFlipY_prototype;

JSBool js_cocos2dx_TransitionZoomFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionZoomFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionZoomFlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionZoomFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionZoomFlipY_TransitionZoomFlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionZoomFlipAngular_class;
extern JSObject *jsb_TransitionZoomFlipAngular_prototype;

JSBool js_cocos2dx_TransitionZoomFlipAngular_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionZoomFlipAngular_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionZoomFlipAngular(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionZoomFlipAngular_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionZoomFlipAngular_TransitionZoomFlipAngular(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFade_class;
extern JSObject *jsb_TransitionFade_prototype;

JSBool js_cocos2dx_TransitionFade_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFade_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFade(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFade_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFade_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFade_TransitionFade(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionCrossFade_class;
extern JSObject *jsb_TransitionCrossFade_prototype;

JSBool js_cocos2dx_TransitionCrossFade_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionCrossFade_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionCrossFade(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionCrossFade_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionCrossFade_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionCrossFade_TransitionCrossFade(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionTurnOffTiles_class;
extern JSObject *jsb_TransitionTurnOffTiles_prototype;

JSBool js_cocos2dx_TransitionTurnOffTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionTurnOffTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionTurnOffTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionTurnOffTiles_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionTurnOffTiles_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionTurnOffTiles_TransitionTurnOffTiles(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSplitCols_class;
extern JSObject *jsb_TransitionSplitCols_prototype;

JSBool js_cocos2dx_TransitionSplitCols_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSplitCols_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSplitCols(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSplitCols_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSplitCols_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSplitCols_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSplitCols_TransitionSplitCols(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionSplitRows_class;
extern JSObject *jsb_TransitionSplitRows_prototype;

JSBool js_cocos2dx_TransitionSplitRows_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionSplitRows_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionSplitRows(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionSplitRows_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSplitRows_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionSplitRows_TransitionSplitRows(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFadeTR_class;
extern JSObject *jsb_TransitionFadeTR_prototype;

JSBool js_cocos2dx_TransitionFadeTR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFadeTR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFadeTR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFadeTR_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeTR_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeTR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeTR_TransitionFadeTR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFadeBL_class;
extern JSObject *jsb_TransitionFadeBL_prototype;

JSBool js_cocos2dx_TransitionFadeBL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFadeBL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFadeBL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFadeBL_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeBL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeBL_TransitionFadeBL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFadeUp_class;
extern JSObject *jsb_TransitionFadeUp_prototype;

JSBool js_cocos2dx_TransitionFadeUp_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFadeUp_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFadeUp(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFadeUp_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeUp_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeUp_TransitionFadeUp(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionFadeDown_class;
extern JSObject *jsb_TransitionFadeDown_prototype;

JSBool js_cocos2dx_TransitionFadeDown_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionFadeDown_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionFadeDown(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionFadeDown_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeDown_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionFadeDown_TransitionFadeDown(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionPageTurn_class;
extern JSObject *jsb_TransitionPageTurn_prototype;

JSBool js_cocos2dx_TransitionPageTurn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionPageTurn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionPageTurn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionPageTurn_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionPageTurn_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionPageTurn_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionPageTurn_TransitionPageTurn(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgress_class;
extern JSObject *jsb_TransitionProgress_prototype;

JSBool js_cocos2dx_TransitionProgress_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgress_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgress(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgress_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TransitionProgress_TransitionProgress(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressRadialCCW_class;
extern JSObject *jsb_TransitionProgressRadialCCW_prototype;

JSBool js_cocos2dx_TransitionProgressRadialCCW_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressRadialCCW_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressRadialCCW(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressRadialCCW_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressRadialCW_class;
extern JSObject *jsb_TransitionProgressRadialCW_prototype;

JSBool js_cocos2dx_TransitionProgressRadialCW_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressRadialCW_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressRadialCW(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressRadialCW_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressHorizontal_class;
extern JSObject *jsb_TransitionProgressHorizontal_prototype;

JSBool js_cocos2dx_TransitionProgressHorizontal_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressHorizontal_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressHorizontal(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressHorizontal_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressVertical_class;
extern JSObject *jsb_TransitionProgressVertical_prototype;

JSBool js_cocos2dx_TransitionProgressVertical_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressVertical_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressVertical(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressVertical_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressInOut_class;
extern JSObject *jsb_TransitionProgressInOut_prototype;

JSBool js_cocos2dx_TransitionProgressInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TransitionProgressOutIn_class;
extern JSObject *jsb_TransitionProgressOutIn_prototype;

JSBool js_cocos2dx_TransitionProgressOutIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionProgressOutIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionProgressOutIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TransitionProgressOutIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItem_class;
extern JSObject *jsb_MenuItem_prototype;

JSBool js_cocos2dx_MenuItem_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItem_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItem(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItem_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_isSelected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_rect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItem_MenuItem(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemLabel_class;
extern JSObject *jsb_MenuItemLabel_prototype;

JSBool js_cocos2dx_MenuItemLabel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemLabel_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemLabel(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemLabel_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_setLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_getDisabledColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_initWithLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_setDisabledColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_getLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemLabel_MenuItemLabel(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemAtlasFont_class;
extern JSObject *jsb_MenuItemAtlasFont_prototype;

JSBool js_cocos2dx_MenuItemAtlasFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemAtlasFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemAtlasFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemAtlasFont_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemAtlasFont_MenuItemAtlasFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemFont_class;
extern JSObject *jsb_MenuItemFont_prototype;

JSBool js_cocos2dx_MenuItemFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemFont_setFontNameObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_getFontSizeObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_setFontSizeObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_getFontNameObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_setFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_getFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_getFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_setFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemFont_MenuItemFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemSprite_class;
extern JSObject *jsb_MenuItemSprite_prototype;

JSBool js_cocos2dx_MenuItemSprite_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemSprite_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemSprite(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemSprite_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_setNormalImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_setDisabledImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_initWithNormalSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_setSelectedImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_getDisabledImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_getSelectedImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_getNormalImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemSprite_MenuItemSprite(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemImage_class;
extern JSObject *jsb_MenuItemImage_prototype;

JSBool js_cocos2dx_MenuItemImage_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemImage_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemImage(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemImage_setDisabledSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemImage_setSelectedSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemImage_setNormalSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemImage_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemImage_initWithNormalImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemImage_MenuItemImage(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MenuItemToggle_class;
extern JSObject *jsb_MenuItemToggle_prototype;

JSBool js_cocos2dx_MenuItemToggle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MenuItemToggle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MenuItemToggle(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MenuItemToggle_setSubItems(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_initWithItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_setSelectedIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_getSelectedIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_addSubItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_getSelectedItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MenuItemToggle_MenuItemToggle(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Menu_class;
extern JSObject *jsb_Menu_prototype;

JSBool js_cocos2dx_Menu_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Menu_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Menu(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Menu_initWithArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_alignItemsVertically(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_alignItemsHorizontallyWithPadding(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_alignItemsHorizontally(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_alignItemsVerticallyWithPadding(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Menu_Menu(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ClippingNode_class;
extern JSObject *jsb_ClippingNode_prototype;

JSBool js_cocos2dx_ClippingNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ClippingNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ClippingNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ClippingNode_isInverted(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_setInverted(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_setStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_getAlphaThreshold(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_getStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_setAlphaThreshold(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ClippingNode_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MotionStreak_class;
extern JSObject *jsb_MotionStreak_prototype;

JSBool js_cocos2dx_MotionStreak_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_MotionStreak_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_MotionStreak(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_MotionStreak_reset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_tintWithColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setStartingPositionInitialized(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_initWithFade(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_isFastMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_isStartingPositionInitialized(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_setFastMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_MotionStreak_MotionStreak(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ProgressTimer_class;
extern JSObject *jsb_ProgressTimer_prototype;

JSBool js_cocos2dx_ProgressTimer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ProgressTimer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ProgressTimer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ProgressTimer_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_isReverseDirection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setBarChangeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getPercentage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setMidpoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getMidpoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_getBarChangeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setReverseDirection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_initWithSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setPercentage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_setType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ProgressTimer_ProgressTimer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RenderTexture_class;
extern JSObject *jsb_RenderTexture_prototype;

JSBool js_cocos2dx_RenderTexture_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_RenderTexture_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_RenderTexture(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_RenderTexture_clearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_listenToForeground(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_getClearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_getClearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setClearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_initWithWidthAndHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_getSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_isAutoDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setClearFlags(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_begin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_saveToFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setAutoDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setClearColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_endToLua(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_beginWithClear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_clearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_getClearColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_listenToBackground(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_clear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_getClearFlags(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_newImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setClearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_setSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_RenderTexture_RenderTexture(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleBatchNode_class;
extern JSObject *jsb_ParticleBatchNode_prototype;

JSBool js_cocos2dx_ParticleBatchNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleBatchNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleBatchNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleBatchNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_disableParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_insertChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_removeChildAtIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleBatchNode_ParticleBatchNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSystem_class;
extern JSObject *jsb_ParticleSystem_prototype;

JSBool js_cocos2dx_ParticleSystem_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSystem_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSystem(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSystem_getStartSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_isFull(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getPositionType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setPosVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRotatePerSecondVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getRadialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setTangentialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getRadialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRotatePerSecond(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getTangentialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getPosVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_updateWithNoTime(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_isBlendAdditive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getSpeedVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setPositionType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_stopSystem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getSourcePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setLifeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_updateQuadWithParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_resetSystem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setTangentialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_isOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_isActive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRadialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getRotatePerSecond(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_initParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEmitterMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setSourcePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setBlendAdditive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setLife(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setAngleVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRotationIsDir(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getTangentialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEmitterMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getAngleVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getRotatePerSecondVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getLife(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setSpeedVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setAutoRemoveOnFinish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_postStep(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEmissionRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getRotationIsDir(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEmissionRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getLifeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setOpacityModifyRGB(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_addParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getParticleCount(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getStartRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setEndSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setRadialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_initWithDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_isAutoRemoveOnFinish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_setStartRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getEndRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystem_ParticleSystem(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSystemQuad_class;
extern JSObject *jsb_ParticleSystemQuad_prototype;

JSBool js_cocos2dx_ParticleSystemQuad_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSystemQuad_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSystemQuad(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSystemQuad_initTexCoordsWithRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_setTextureWithRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_initIndices(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_setDisplayFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSystemQuad_ParticleSystemQuad(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleFire_class;
extern JSObject *jsb_ParticleFire_prototype;

JSBool js_cocos2dx_ParticleFire_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleFire_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleFire(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleFire_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFire_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFire_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFire_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFire_ParticleFire(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleFireworks_class;
extern JSObject *jsb_ParticleFireworks_prototype;

JSBool js_cocos2dx_ParticleFireworks_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleFireworks_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleFireworks(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleFireworks_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFireworks_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFireworks_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFireworks_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFireworks_ParticleFireworks(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSun_class;
extern JSObject *jsb_ParticleSun_prototype;

JSBool js_cocos2dx_ParticleSun_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSun_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSun(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSun_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSun_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSun_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSun_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSun_ParticleSun(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleGalaxy_class;
extern JSObject *jsb_ParticleGalaxy_prototype;

JSBool js_cocos2dx_ParticleGalaxy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleGalaxy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleGalaxy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleGalaxy_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleGalaxy_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleGalaxy_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleGalaxy_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleGalaxy_ParticleGalaxy(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleFlower_class;
extern JSObject *jsb_ParticleFlower_prototype;

JSBool js_cocos2dx_ParticleFlower_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleFlower_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleFlower(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleFlower_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFlower_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFlower_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFlower_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleFlower_ParticleFlower(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleMeteor_class;
extern JSObject *jsb_ParticleMeteor_prototype;

JSBool js_cocos2dx_ParticleMeteor_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleMeteor_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleMeteor(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleMeteor_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleMeteor_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleMeteor_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleMeteor_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleMeteor_ParticleMeteor(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSpiral_class;
extern JSObject *jsb_ParticleSpiral_prototype;

JSBool js_cocos2dx_ParticleSpiral_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSpiral_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSpiral(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSpiral_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSpiral_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSpiral_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSpiral_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSpiral_ParticleSpiral(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleExplosion_class;
extern JSObject *jsb_ParticleExplosion_prototype;

JSBool js_cocos2dx_ParticleExplosion_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleExplosion_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleExplosion(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleExplosion_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleExplosion_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleExplosion_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleExplosion_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleExplosion_ParticleExplosion(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSmoke_class;
extern JSObject *jsb_ParticleSmoke_prototype;

JSBool js_cocos2dx_ParticleSmoke_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSmoke_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSmoke(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSmoke_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSmoke_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSmoke_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSmoke_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSmoke_ParticleSmoke(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleSnow_class;
extern JSObject *jsb_ParticleSnow_prototype;

JSBool js_cocos2dx_ParticleSnow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleSnow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleSnow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleSnow_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSnow_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSnow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSnow_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleSnow_ParticleSnow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParticleRain_class;
extern JSObject *jsb_ParticleRain_prototype;

JSBool js_cocos2dx_ParticleRain_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParticleRain_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParticleRain(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParticleRain_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleRain_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleRain_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleRain_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParticleRain_ParticleRain(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_FileUtils_class;
extern JSObject *jsb_FileUtils_prototype;

JSBool js_cocos2dx_FileUtils_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_FileUtils_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_FileUtils(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_FileUtils_isFileExist(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_isPopupNotify(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_fullPathForFilename(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_fullPathFromRelativeFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_getFileData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_setFilenameLookupDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_addSearchResolutionsOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_getFileDataFromZip(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_purgeCachedEntries(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_isAbsolutePath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_getWritablePath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_addSearchPath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_setPopupNotify(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_FileUtils_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Application_class;
extern JSObject *jsb_Application_prototype;

JSBool js_cocos2dx_Application_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Application_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Application(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Application_getTargetPlatform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Application_setAnimationInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Application_getCurrentLanguage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Application_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ShaderCache_class;
extern JSObject *jsb_ShaderCache_prototype;

JSBool js_cocos2dx_ShaderCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ShaderCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ShaderCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ShaderCache_reloadDefaultShaders(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_addProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_getProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_loadDefaultShaders(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ShaderCache_ShaderCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_AnimationCache_class;
extern JSObject *jsb_AnimationCache_prototype;

JSBool js_cocos2dx_AnimationCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_AnimationCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_AnimationCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_AnimationCache_getAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_addAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_addAnimationsWithDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_removeAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_addAnimationsWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_AnimationCache_AnimationCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SpriteFrameCache_class;
extern JSObject *jsb_SpriteFrameCache_prototype;

JSBool js_cocos2dx_SpriteFrameCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SpriteFrameCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SpriteFrameCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SpriteFrameCache_addSpriteFramesWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_addSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_removeUnusedSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_getSpriteFrameByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_removeSpriteFramesFromFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_removeSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_removeSpriteFramesFromTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_removeSpriteFrameByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SpriteFrameCache_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TextureCache_class;
extern JSObject *jsb_TextureCache_prototype;

JSBool js_cocos2dx_TextureCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TextureCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TextureCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TextureCache_dumpCachedTextureInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_removeAllTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_removeTextureForKey(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_addImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_getTextureForKey(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_removeUnusedTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_removeTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_reloadAllTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TextureCache_TextureCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ParallaxNode_class;
extern JSObject *jsb_ParallaxNode_prototype;

JSBool js_cocos2dx_ParallaxNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_ParallaxNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_ParallaxNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_ParallaxNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_getParallaxArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_setParallaxArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_ParallaxNode_ParallaxNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXObjectGroup_class;
extern JSObject *jsb_TMXObjectGroup_prototype;

JSBool js_cocos2dx_TMXObjectGroup_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXObjectGroup_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXObjectGroup(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXObjectGroup_setPositionOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getProperty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getPositionOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_setGroupName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_getGroupName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_setObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXObjectGroup_TMXObjectGroup(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXLayerInfo_class;
extern JSObject *jsb_TMXLayerInfo_prototype;

JSBool js_cocos2dx_TMXLayerInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXLayerInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXLayerInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXLayerInfo_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayerInfo_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayerInfo_TMXLayerInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXTilesetInfo_class;
extern JSObject *jsb_TMXTilesetInfo_prototype;

JSBool js_cocos2dx_TMXTilesetInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXTilesetInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXTilesetInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXTilesetInfo_rectForGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTilesetInfo_TMXTilesetInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXMapInfo_class;
extern JSObject *jsb_TMXMapInfo_prototype;

JSBool js_cocos2dx_TMXMapInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXMapInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXMapInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXMapInfo_setObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_initWithTMXFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_isStoringCharacters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setLayers(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_parseXMLFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getParentElement(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setTMXFileName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_parseXMLString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getLayers(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getTilesets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getParentGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setParentElement(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_initWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setParentGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getLayerAttribs(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getTileProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getTMXFileName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setCurrentString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setTileProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setStoringCharacters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setTilesets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_getCurrentString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_setLayerAttribs(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_createWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXMapInfo_TMXMapInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXLayer_class;
extern JSObject *jsb_TMXLayer_prototype;

JSBool js_cocos2dx_TMXLayer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXLayer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXLayer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXLayer_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getTileGIDAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getPositionAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setLayerOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_releaseMap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setTiles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getLayerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setMapTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getLayerOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setLayerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_removeTileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_initWithTilesetInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setupTiles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setTileGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getMapTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getProperty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setLayerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getLayerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_setTileSet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getTileSet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_getTileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXLayer_TMXLayer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TMXTiledMap_class;
extern JSObject *jsb_TMXTiledMap_prototype;

JSBool js_cocos2dx_TMXTiledMap_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TMXTiledMap_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TMXTiledMap(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TMXTiledMap_setObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getProperty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_setMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getObjectGroup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getPropertiesForGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_initWithTMXFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_setTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_initWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getLayer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_getMapOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_setMapOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_createWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TMXTiledMap_TMXTiledMap(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_TileMapAtlas_class;
extern JSObject *jsb_TileMapAtlas_prototype;

JSBool js_cocos2dx_TileMapAtlas_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TileMapAtlas_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TileMapAtlas(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_TileMapAtlas_initWithTileFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_releaseMap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_getTGAInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_getTileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_setTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_setTGAInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_TileMapAtlas_TileMapAtlas(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Timer_class;
extern JSObject *jsb_Timer_prototype;

JSBool js_cocos2dx_Timer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Timer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Timer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Timer_getInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Timer_setInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Timer_initWithScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Timer_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Timer_getScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Timer_Timer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Scheduler_class;
extern JSObject *jsb_Scheduler_prototype;

JSBool js_cocos2dx_Scheduler_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_Scheduler_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_Scheduler(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_Scheduler_setTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scheduler_getTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_Scheduler_Scheduler(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SimpleAudioEngine_class;
extern JSObject *jsb_SimpleAudioEngine_prototype;

JSBool js_cocos2dx_SimpleAudioEngine_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SimpleAudioEngine_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SimpleAudioEngine(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SimpleAudioEngine_preloadBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_stopBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_stopAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_setBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_preloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_isBackgroundMusicPlaying(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_willPlayBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_playEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_rewindBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_playBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_setEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_stopEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_unloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
#endif

