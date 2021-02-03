cmake_minimum_required(VERSION 3.17)
project(CppPrj)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES main.cpp
        src/ALLnode.cpp src/ALLnode.h
        src/list_operations.h src/list_operations.cpp
        src/book_exercise.cpp src/book_exercise.h
        src/bitwise_opr.cpp src/bitwise_opr.h src/normal.cpp src/normal.h src/polymorphism.cpp src/polymorphism.h src/interv_q.cpp src/interv_q.h)

add_executable(CppPrj ${SOURCES})