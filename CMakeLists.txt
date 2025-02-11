cmake_minimum_required(VERSION 3.10)
project(MyBlockchain)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the "include" directory for headers
include_directories(include)

# Find OpenSSL (if using for cryptography)
find_package(OpenSSL REQUIRED)

# Collect all source files
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(my_program ${SOURCES})

# Link OpenSSL
target_link_libraries(my_program OpenSSL::SSL OpenSSL::Crypto)
