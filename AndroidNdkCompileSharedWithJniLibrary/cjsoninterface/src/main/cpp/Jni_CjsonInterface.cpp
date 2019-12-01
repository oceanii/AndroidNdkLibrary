#include <jni.h>
#include <string>

#include <android/log.h>

#define LOG_TAG  "NativeLog"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#include "CCjsonUtils.h"

#ifdef __cplusplus
extern "C"{
#endif

JNIEXPORT jstring JNICALL Java_com_example_xzy_cjsoninterface_JniCjsonInterface_nativeGetCjsonVersion(
        JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";

    std::string cjsonVersionStr = CCjsonUtils::getCjsonVersion();
    LOGD("cjsoninterface/nativeGetCjsonVersion: pCjsonVersionStr=%s", cjsonVersionStr.c_str());

    return env->NewStringUTF(cjsonVersionStr.c_str());
}

#ifdef __cplusplus
}
#endif