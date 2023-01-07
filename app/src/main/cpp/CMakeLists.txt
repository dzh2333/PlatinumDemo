
cmake_minimum_required(VERSION 3.18.1)

project("myapplication")

set(distribution_DIR ../../../../libs/armeabi-v7a)

file(GLOB_RECURSE SRC_DIR_LIST
        android/*.cpp
        dlna/*.cpp
        udp/*.cpp
        tcp/*.cpp
        )

add_library(
        myapplication

        SHARED

        ${SRC_DIR_LIST}
        native-lib.cpp)

find_library(
        log-lib

        log)

add_library(platinum
        SHARED
        IMPORTED)

set_target_properties(platinum
        PROPERTIES IMPORTED_LOCATION
        ${distribution_DIR}/libplatinum-jni.so)

include_directories(include/core)
include_directories(include/neptune)
include_directories(include/platinum)
target_link_libraries(
        myapplication
        platinum
        android
        ${log-lib})