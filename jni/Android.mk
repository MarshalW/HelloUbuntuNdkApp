LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_LDLIBS :=-llog
OPENCV_LIB_TYPE:=STATIC 
LOCAL_MODULE    := NativeUtils 
LOCAL_SRC_FILES := NativeUtils.cpp
APP_STL:=stlport_static
include $(BUILD_SHARED_LIBRARY)