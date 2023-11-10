message("------------------------------")
message("Building the application ...")
message("------------------------------")

cmake_minimum_required(VERSION 3.16.3)
project(my_test_program DESCRIPTION "A simple test program" LANGUAGES CXX)
add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${my_library_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE my_library)
