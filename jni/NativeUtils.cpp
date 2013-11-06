#include <jni.h>
#include <stdio.h>
#include <iostream>

#include <opencv2/opencv.hpp>
#include <android/log.h>

#include "marshal_helloubuntuapp_NativeUtils.h"

using namespace std;
using namespace cv;

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native_utils", __VA_ARGS__))

JNIEXPORT void JNICALL Java_marshal_helloubuntuapp_NativeUtils_sayHello
  (JNIEnv *env, jobject thiz){
	FastFeatureDetector fast(40);
	Mat a;
	LOGI("测试一下");
}
