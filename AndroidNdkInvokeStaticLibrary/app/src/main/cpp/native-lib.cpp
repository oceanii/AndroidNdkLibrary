#include <jni.h>
#include <string>

#include <android/log.h>
#define LOG_TAG  "NativeLog"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#include "CCjsonUtils.h"

//extern "C"
//__cplusplus是cpp中的自定义宏, 定义了这个宏表示这是一段cpp的代码
//下面的代码含义是: 如果这一段是cpp代码, 则以标准C形式进行编译链接
#ifdef __cplusplus
extern "C"{
#endif


JNIEXPORT jstring JNICALL Java_com_example_xzy_androidndkinvokestaticlibrary_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    const char *pCjsonVersionStr = CCjsonUtils::getCjsonVersion();
    LOGD("AndroidNdkInvokeStaticLibrary/stringFromJNI: pCjsonVersionStr=%s", pCjsonVersionStr);

    return env->NewStringUTF(hello.c_str());
}


#ifdef __cplusplus
}
#endif