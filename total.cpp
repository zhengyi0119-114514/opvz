#include <iostream>
#include <format>
#define __STDC_WANT_LIB_EXT1__ 1
#include "include/Information.h"
#include "./Debug.h"
#include <assert.h>

int main (int agvc,char** agvs)
{
    //我也不知道这是什么
    //我在思考人生的意义
    //TODO:再干些什么
    std::cout<<"hello world"<<std::endl;
    std::wcout<<std::format
    (
        L"OpenPlantsVsZombies Version:{:} on {:} {:} {:}"
        "[c:{:} {:} version{:}][cpp:{:} {:} version{:}]{:}"
        "[cmake:{:}]{:}(UTC){:}"
        ,PROJECT_VERSION_W,PROJECT_SYSTEM_NAME_W,PROJECT_SYSTEM_PROCESSOR_W,L'\n'
        ,PROJECT_C_VERSION,PROJECT_C_COMPILER_ID_W,PROJECT_C_COMPILER_VERSION_W
        ,PROJECT_CPP_VERSION,PROJECT_CXX_COMPILER_ID_W,PROJECT_CXX_COMPILER_VERSION_W,L"\n"
        ,PROJECT_CMAKE_VERSION_W,PROJECT_BUILD_TIME_W,L'\n'
    );
    wchar_t wstr_buff[255]{};
    std::wcin.getline(wstr_buff,255);
    ReadAnyKey();
}