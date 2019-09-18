cmake_minimum_required(VERSION 3.14)
project(python1)

set(CMAKE_CXX_STANDARD 17)

add_library(python1 main.cpp example/example-initialization.cpp example/classes/Classy/Classy-description.cpp example/classes/Classy/Classy-impl.cpp example/classes/Classy/Classy.cpp)

target_link_libraries(python1 -lpython37)

target_link_directories(python1 PUBLIC vendors/python3/libs)
target_include_directories(python1 PUBLIC vendors/python3/include)