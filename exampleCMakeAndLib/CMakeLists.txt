message("------------------------------")
message("Building the whole project...")
message("------------------------------")

cmake_minimum_required(VERSION 3.16.3)
project(My_Project DESCRIPTION "A simple test program" LANGUAGES CXX)

add_subdirectory(lib)
add_subdirectory(app)