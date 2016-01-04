/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_isoblue_can_CanSocket */

#ifndef _Included_org_isoblue_can_CanSocket
#define _Included_org_isoblue_can_CanSocket
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    initIds
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_isoblue_can_CanSocket_initIds
  (JNIEnv *, jclass);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    closesocket
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_isoblue_can_CanSocket_closesocket
  (JNIEnv *, jobject);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    openSocket
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_isoblue_can_CanSocket_openSocket
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    getIfIndex
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_isoblue_can_CanSocket_getIfIndex
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    setsockopt
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_isoblue_can_CanSocket_setsockopt
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    getsockopt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_isoblue_can_CanSocket_getsockopt
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isoblue_can_CanSocket
 * Method:    selectFd
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isoblue_can_CanSocket_selectFd
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
