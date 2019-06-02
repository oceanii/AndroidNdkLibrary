//
// Created by xzy on 2019/5/19.
//

#ifndef __Cjson_Interface_H__
#define __Cjson_Interface_H__

#ifndef _HIDDEN_API_SYMBOL
    #define _API_SYMBOL __attribute__((visibility("default")))
#else
    #define _API_SYMBOL __attribute__((visibility("hidden")))
#endif



//对外提供的封装接口,用到什么封装什么即可
/*static*/ _API_SYMBOL const char* getCjsonVersion();

#endif //ANDROIDNDKCOMPILESHAREDNOJNILIBRARY_CCJSONINTERFACE_H
