# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# 隐藏符号
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

#打印LOG
message(STATUS "Cmake build type is: "${CMAKE_BUILD_TYPE})
message(STATUS "Cmake build android abi is: "${ANDROID_ABI})

#设置静态库和动态库的输出路径
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/libs/${CMAKE_BUILD_TYPE}/${ANDROID_ABI})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/libs/${CMAKE_BUILD_TYPE}/${ANDROID_ABI})

#设置变量
set(LOCAL_PATH ${CMAKE_SOURCE_DIR}/src/main/cpp)

#引入头文件
include_directories(
        ${LOCAL_PATH}/libs/source/cjson/
        ${LOCAL_PATH}/cppfile/
        ${LOCAL_PATH}/cfile/
        )

#增加动态库
add_library( # Sets the name of the library.
             cjsoninterface

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             ${LOCAL_PATH}/libs/source/cjson/cJSON.c
             ${LOCAL_PATH}/libs/source/cjson/cJSON_Utils.c
             ${LOCAL_PATH}/cppfile/CCjsonUtils.cpp
             ${LOCAL_PATH}/Jni_CjsonInterface.cpp

             )

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

target_link_libraries( # Specifies the target library.
                       cjsoninterface  #链接该动态库进行测试, 如果不测试, 则不需要链接

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )