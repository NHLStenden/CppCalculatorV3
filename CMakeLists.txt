cmake_minimum_required(VERSION 3.23)
project(CppCalculator_v3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")

add_library(calculator STATIC Calculator.cpp Parser.cpp
        ILogger.h
        FileLogger.h
        FileLogger.cpp
        MockLogger.h)
add_executable(calculator_v3 main.cpp)

target_link_libraries(calculator_v3 PRIVATE calculator)

enable_testing()
add_subdirectory(tests)
