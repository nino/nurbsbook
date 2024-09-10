cmake_minimum_required(VERSION 3.16)
project(nurbsbook)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

set(SOURCES
  src/nurbsbook.cpp
)

add_library(${PROJECT_NAME} ${SOURCES})

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

enable_testing()

add_executable(
  nurbsbook_test
  test/nurbsbook_test.cpp
)
target_link_libraries(
  nurbsbook
  Eigen3::Eigen
)
target_link_libraries(
  nurbsbook_test
  GTest::gtest_main
  nurbsbook
  Eigen3::Eigen
)

include(GoogleTest)
gtest_discover_tests(nurbsbook_test)
