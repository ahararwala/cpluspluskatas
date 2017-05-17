cmake_minimum_required(VERSION 3.7)
project(cpluspluskatas)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


set(SOURCE_FILES main.cpp src/FizzBuzz.cpp src/FizzBuzz.h Tests/FizzBuzzTest.cpp)
add_executable(cpluspluskatas ${SOURCE_FILES})

target_link_libraries(cpluspluskatas gtest gtest_main)
