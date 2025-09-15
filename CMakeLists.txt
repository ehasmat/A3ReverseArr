cmake_minimum_required(VERSION 3.10)
project(ArrayReverse)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include your headers
include_directories(include)

# Main executable
add_executable(main src/main.cpp)

####################################################

# Add the test executable
add_executable(my_test  tests/test.cpp)

# Include directories for the test target
target_include_directories(my_test PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Enable testing
enable_testing()

# Register the test executable with CTest (optional)
add_test(NAME my_test COMMAND my_test)
