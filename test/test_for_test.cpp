
#include <cstddef>
#include "catch2/catch_test_macros.hpp"
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>
#include <stdio.h>

#include <catch2/catch_all.hpp>

TEST_CASE("TestForCatch2","[unit_test]")
{
    auto wstr = static_cast<wchar_t*>(malloc(255*(4/sizeof(wchar_t))));
    CHECK(wstr!=NULL);
    free(wstr);
}