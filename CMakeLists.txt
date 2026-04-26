cmake_minimum_required(VERSION 3.15)

project(light_sid LANGUAGES CXX)
add_executable(light_sid "example.cpp")
set_target_properties(light_sid PROPERTIES CXX_STANDARD 23)