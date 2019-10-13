//
// Created by xzy on 2019/5/19.
//

#ifndef __Cjson_Interface_H__
#define __Cjson_Interface_H__


#define _SYMBOL_API    __attribute__((visibility ("default")))
//#define _SYMBOL_API    __attribute__((visibility ("hidden")))


//对外提供的封装接口,用到什么封装什么即可
_SYMBOL_API const char* API_getCjsonVersion();


#endif //ANDROIDNDKCOMPILESHAREDNOJNILIBRARY_CCJSONINTERFACE_H
