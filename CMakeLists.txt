cmake_minimum_required(VERSION 3.28)

project(probcalc CXX)

add_executable(probcalc src/main.cpp
src/calculator.h
src/calculator.cpp
src/operation.h
src/operation.cpp
src/parse.h
src/parse.cpp
src/tokenizer.h
src/tokenizer.cpp
src/util.h
src/util.cpp)

add_executable(util_test src/util_test.cpp src/util.h src/util.cpp)

add_executable(token_test src/token_test.cpp src/tokenizer.cpp src/tokenizer.h)

