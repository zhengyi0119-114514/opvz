#include <format>
#include <iostream>
#define __STDC_WANT_LIB_EXT1__ 1
#include "Information.h"
#include "./Debug.h"
#include <assert.h>
#include "total.h"
#include "src/base/registrar/registrar.hpp"

void total()
{
    try
    {
        opvz::registrar::ModuleList = new std::map<std::string,opvz::registrar::Module>();
    }
    catch(std::bad_alloc&)
    {
        exit(EXIT_FAILURE);
    }
}
int main (int agvc,char** agvs)
{
    //我也不知道这是什么
    //我在思考人生的意义
    //TODO:再干些什么
    std::cout<<"hello world"<<std::endl;
    std::wcout<<std::format
    (
        L"project:{:}\t version:{:} {:}"
        "time:{:}\t c language version:{:} \t c++ language:{:} {:}"
        "is debug:{:} {:}"
        ,PROJECT_NAME_W,PROJECT_VERSION_W,L"\n"
        ,PROJECT_BUILD_TIME_W,PROJECT_C_VERSION,PROJECT_CPP_VERSION,L"\n"
        ,IsDebug(),L"\n"
    );
    wchar_t wstr_buff[255]{};
    std::wcin.getline(wstr_buff,255);
    ReadAnyKey();
}