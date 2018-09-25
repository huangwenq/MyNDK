//
// Created by archermind on 9/25/18.
//
//导入jni.h头文件
#include <jni.h>
//导入JNI本地类生成的JNITest.h头文件   注意此处不能使用include <JNITest.h>   而要使用include "JNITest.h"这样引入   不然会报错
#include "JNITest.h"

JNIEXPORT jint JNICALL Java_com_ndk_archermind_myndk_JNITest_getSum
        (JNIEnv *, jobject, jint a, jint b) {
    return a + b;
};

