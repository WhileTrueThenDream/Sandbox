message("------------------------------")
message("Building the application ...")
message("------------------------------")

cmake_minimum_required(VERSION 3.16.3)
project(my_test_program DESCRIPTION "A simple test program" LANGUAGES CXX)

set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(LIB_DIR ${PROJECT_SOURCE_DIR}/../lib/inc/)
add_executable(${PROJECT_NAME} ${SRC_DIR}/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${LIB_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC my_library)
