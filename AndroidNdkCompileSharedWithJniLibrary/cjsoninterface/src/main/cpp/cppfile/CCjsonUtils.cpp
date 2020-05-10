//
// Created by xzy on 2019/5/19.
//

#include "CCjsonUtils.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "cJSON.h"
#include "cJSON_Utils.h"

#ifdef __cplusplus
};
#endif

const char* CCjsonUtils::getCjsonVersion() {
    return cJSON_Version();
}

