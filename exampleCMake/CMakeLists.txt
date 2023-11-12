message("------------------------------")
message(" ...  Building example    ...")
message("------------------------------")


cmake_minimum_required(VERSION 3.16.3)

# The name of the executable will be : "My_Example"
# When project(..) invoked the variable "PROJECT_NAME" will 
# have the value "My_Example"
project(My_Example DESCRIPTION "A simple test program" LANGUAGES CXX)

# Set two new variables: one for src path and another for include path
# (PROJECT_SOURCE_DIR is set automatically when project(...) invoked
# its value is the path to the called CMakeLists.txt file)
set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(INC_DIR ${PROJECT_SOURCE_DIR}/inc)

# Nexts adds the target (executable) name and its source files
add_executable(${PROJECT_NAME} ${SRC_DIR}/main.cpp ${SRC_DIR}/file_ops.cpp)

# Specifies the include directories for the target
target_include_directories(${PROJECT_NAME} PUBLIC "${INC_DIR}"/inc)