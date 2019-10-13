//
// Created by xzy on 2019/4/9.
//

#ifndef __Cjson_Utils_H__
#define __Cjson_Utils_H__

//此处导入C++的头文件
//#include "CObjectUtils.h"

#include "CCjsonInterface.h"

class CCjsonUtils{
public:
    CCjsonUtils();
    virtual ~CCjsonUtils();

    static const char* getCjsonVersion();
};

#endif //ANDROIDNDKINVOKESTATICLIBRARY_CCJSONUTILS_H
