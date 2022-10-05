project(FF)

cmake_minimum_required(VERSION 3.2)

add_executable(ff 
src/main.cpp 
src/lz4.cpp
src/rev8encode.cpp
src/rev8decode.cpp)
