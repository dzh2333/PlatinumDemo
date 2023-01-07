#include <jni.h>
#include <string>
#include "include/Core/PltUPnP.h"


extern "C"
JNIEXPORT jstring JNICALL
Java_com_mark_platinumdlnademo_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jlong JNICALL
Java_com_mark_platinumdlnademo_MainActivity_initUpnp(JNIEnv *env, jobject thiz) {
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_mark_platinumdlnademo_MainActivity_upnpStart(JNIEnv *env, jobject thiz, jlong long_str) {
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_mark_platinumdlnademo_MainActivity_upnpStop(JNIEnv *env, jobject thiz, jlong long_str) {
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_mark_platinumdlnademo_MainActivity_startScan(JNIEnv *env, jobject thiz, jlong long_str) {
}