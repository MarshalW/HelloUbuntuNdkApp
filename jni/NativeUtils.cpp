#include <jni.h>
#include <stdio.h>
#include <iostream>

#include <android/log.h>
#include "marshal_helloubuntuapp_NativeUtils.h"

using namespace std;

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native_utils", __VA_ARGS__))

JNIEXPORT void JNICALL Java_marshal_helloubuntuapp_NativeUtils_sayHello
  (JNIEnv *env, jobject thiz){
	LOGI("测试一下");
}
