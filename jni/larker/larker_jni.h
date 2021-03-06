/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "larker.h"
/* Header for class com_leepood_lark_utils_LarkerNative */

#ifndef _Included_com_leepood_lark_utils_LarkerNative
#define _Included_com_leepood_lark_utils_LarkerNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_leepood_lark_utils_LarkerNative
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_leepood_lark_utils_LarkerNative_init
  (JNIEnv *, jobject,jint,jint);




 /*
 * Class:     com_leepood_lark_utils_LarkerNative
 * Method:    destory
 * Signature: ()Z
 */
JNIEXPORT void JNICALL Java_com_leepood_lark_utils_LarkerNative_destory
  (JNIEnv *, jobject);

/*
 * Class:     com_leepood_lark_utils_LarkerNative
 * Method:    loopNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_leepood_lark_utils_LarkerNative_loopNative
  (JNIEnv *, jobject);

/*
 * Class:     com_leepood_lark_utils_LarkerNative
 * Method:    stopNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_leepood_lark_utils_LarkerNative_stopNative
  (JNIEnv *, jobject);

/*
 * Class:     com_leepood_lark_utils_LarkerNative
 * Method:    feedH264Data
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_leepood_lark_utils_LarkerNative_feedH264Data
  (JNIEnv *, jobject, jbyteArray);

Larker* getLarkerInstance(JNIEnv *env, jobject jthiz);

void storeLarkerInstance(JNIEnv *env, jobject jthiz,Larker* instance);

#ifdef __cplusplus
}
#endif
#endif
