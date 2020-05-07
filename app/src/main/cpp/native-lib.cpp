#include <jni.h>
#include <string>
#include "../jni/com_example_myapplication_myjni.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_myapplication_myjni_getHelloWord(JNIEnv *env, jobject thiz) {
    return env -> NewStringUTF("Hello every,this is my first jni project");
}