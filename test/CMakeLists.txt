cmake_minimum_required(VERSION 3.20.0)
project(unit_test)
find_package(Catch2 QUIET)

if(NOT Catch2_Found)
    message(NOTICE "cannot found Catch2")
    include(FetchContent)
    FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.6.0
    )
    FetchContent_MakeAvailable(Catch2)
    list(APPEND CMAKE_MODULE_PATH "${catch2_SOURCE_DIR}/extras")
    include(Catch)
endif()    

add_executable(unit_tasts test_for_test.cpp)
target_link_libraries(unit_tasts PRIVATE sut Catch2::Catch2WithMain)
catch_discover_tests(unit_tasts)

