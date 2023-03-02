cmake_minimum_required(VERSION 3.15)

project(GeometryCalculator)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_subdirectory(lib/Catch2-devel)

add_executable(main 
    main.cpp)

include_directories(${CMAKE_SOURCE_DIR})
add_executable(test_UnitTests
    tests/test_UnitTests.cpp)

target_link_libraries(test_UnitTests PRIVATE Catch2::Catch2WithMain)
