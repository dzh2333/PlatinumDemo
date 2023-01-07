#ifndef XPLAY_XLOG_H
#define XPLAY_XLOG_H

class XLog {

};
#ifdef ANDROID
#include <android/log.h>
#define OLOGD(...) __android_log_print(ANDROID_LOG_DEBUG,"ObeFile",__VA_ARGS__)
#define OLOGI(...) __android_log_print(ANDROID_LOG_INFO,"ObeFile",__VA_ARGS__)
#define OLOGE(...) __android_log_print(ANDROID_LOG_ERROR,"ObeFile",__VA_ARGS__)
#else
#define OLOGD(...) printf("XPlay",__VA_ARGS__)
#define OLOGI(...) printf("XPlay",__VA_ARGS__)
#define OLOGE(...) printf("XPlay",__VA_ARGS__)

#endif



#endif //XPLAY_XLOG_H
