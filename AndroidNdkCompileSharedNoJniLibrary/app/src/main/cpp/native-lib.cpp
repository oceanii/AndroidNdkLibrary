#include <jni.h>
#include <string>

#include <android/log.h>
#define LOG_TAG  "NativeLog"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#include "cJSON.h"

extern "C"

JNIEXPORT jstring JNICALL Java_com_example_xzy_androidndkcompilesharednojnilibrary_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    const char *pCjsonVersionStr = cJSON_Version();
    LOGD("AndroidNdkCompileSharedNoJniLibrary/stringFromJNI: pCjsonVersionStr=%s", pCjsonVersionStr);

    return env->NewStringUTF(hello.c_str());
}
