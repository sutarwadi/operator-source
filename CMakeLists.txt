cmake_minimum_required(VERSION 3.12)

project(literal)

add_library(libtest)
set_target_properties(libtest PROPERTIES OUTPUT_NAME test)

target_include_directories(libtest PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

target_sources(libtest PRIVATE libtest.cpp)


add_executable(test test.cpp)
target_link_libraries(test PUBLIC libtest)
