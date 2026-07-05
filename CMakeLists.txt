cmake_minimum_required(VERSION 3.16)

project(cpp_project VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# App target
file(GLOB APP_SOURCES "src/*.cpp")
add_executable(hello_world ${APP_SOURCES})

target_include_directories(hello_world PRIVATE
    include
)

# Optional: GoogleTest (keep only if you plan to add tests)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_add
    tests/test_add.cpp
    src/add.cpp
)

target_include_directories(test_add PRIVATE
    include
)

target_link_libraries(test_add PRIVATE
    GTest::gtest_main
)

# configuration for calculator tests
add_executable(test_calculator
    tests/test_calculator.cpp
    src/calculator.cpp
)

target_include_directories(test_calculator PRIVATE
    include
)

target_link_libraries(test_calculator PRIVATE
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_add)
gtest_discover_tests(test_calculator)

add_executable(test_order_service_integration
    tests/test_order_service_integration.cpp
    src/order_service.cpp
    src/calculator.cpp
)

target_include_directories(test_order_service_integration PRIVATE
    include
)

target_link_libraries(test_order_service_integration PRIVATE
    GTest::gtest_main
)

gtest_discover_tests(test_order_service_integration)