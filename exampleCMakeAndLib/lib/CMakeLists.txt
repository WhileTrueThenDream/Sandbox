
message("------------------------------")
message("Building the library ...")
message("------------------------------")

cmake_minimum_required(VERSION 3.16.3)
project(my_library DESCRIPTION "A simple library" LANGUAGES CXX)

set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(INC_DIR ${PROJECT_SOURCE_DIR}/inc)

add_library(${PROJECT_NAME} ${SRC_DIR}/my_lib.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${INC_DIR}/)
