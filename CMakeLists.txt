
cmake_minimum_required(VERSION 3.15)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

project(kitchen_concept)

include_directories(include)

add_executable(${PROJECT_NAME} kitchen_concepts.h vegetables.h)

target_sources(
        ${PROJECT_NAME}
        PRIVATE
        main.cpp
)

#target_compile_options(
#        ${PROJECT_NAME}
#        PRIVATE
#        "-fconcepts"
#)


