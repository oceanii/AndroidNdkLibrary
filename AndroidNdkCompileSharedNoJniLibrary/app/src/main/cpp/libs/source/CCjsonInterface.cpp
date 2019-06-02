//
// Created by xzy on 2019/5/19.
//

#include "CCjsonInterface.h"

#ifdef __cplusplus
extern "C" {
#endif

//将第三方库进行一层封装，在封装层的.cpp中引入头文件，因此对外只需要提供so和封装层的.h即可
//此处导入C的头文件
#include "cJSON.h"
#include "cJSON_Utils.h"

#ifdef __cplusplus
};
#endif

const char* getCjsonVersion() {
    return cJSON_Version();
}