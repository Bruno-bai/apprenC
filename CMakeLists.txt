cmake_minimum_required(VERSION 3.4.1)
project(demo)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(test ./src/main.cpp) # 生成可执行文件
# add_library(common STATIC util.cpp) # 生成静态库
# add_library(common SHARED util.cpp) # 生成动态库或共享库
