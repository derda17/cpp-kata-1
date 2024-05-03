cmake_minimum_required(VERSION 3.10)

project(cpp_kata_1 VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
cmake_policy(SET CMP0076 NEW)

# Main aspplication
add_executable(cpp_kata_1)
set_target_properties(cpp_kata_1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

# GTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_executable(cpp_kata_1_tests)
target_link_libraries(cpp_kata_1_tests GTest::gtest_main)
enable_testing()
include(GoogleTest)
gtest_discover_tests(cpp_kata_1_tests)

# Traverse src directory tree
add_subdirectory(src)

