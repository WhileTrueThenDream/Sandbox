
message("------------------------------")
message("Building the library ...")
message("------------------------------")
cmake_minimum_required(VERSION 3.16.3)
project(my_library DESCRIPTION "A simple library" LANGUAGES CXX)
add_library(${PROJECT_NAME} my_lib.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC my_test_program_SOURCE_DIR)
