//
// Created by xzy on 2019/4/9.
//

#ifndef __Cjson_Utils_H__
#define __Cjson_Utils_H__

//此处导入C++的头文件
//#include "CObjectUtils.h"

#ifdef __cplusplus
extern "C" {
#endif

//此处导入C的头文件
#include "cJSON.h"
#include "cJSON_Utils.h"

#ifdef __cplusplus
};
#endif

class CCjsonUtils{
public:
    CCjsonUtils();
    virtual ~CCjsonUtils();

    static const char* getCjsonVersion();
};

#endif //ANDROIDNDKINVOKESTATICLIBRARY_CCJSONUTILS_H
