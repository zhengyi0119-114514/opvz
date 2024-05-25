#include "ModuleRegistrar.h"
#include "catch2/catch_test_macros.hpp"
#include <catch2/catch_all.hpp>
#include <cstddef>

TEST_CASE("TestRegistrar","[opvz_server]")
{
    CHECK(RegisterModule(nullptr,nullptr)!=0);
}