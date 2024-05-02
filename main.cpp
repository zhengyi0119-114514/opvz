#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include "Information.h"

int main (int agvc,char** agvs)
{
    if((agvc > 1 && (!strcmp(agvs[1],"-v")||!strcmp(agvs[1],"--version")))||true)
    {
        wprintf_s(L"project:%ls version:%ls "
            "buildtime:%ls ",
            PROJECT_NAME_W,PROJECT_VERSION_W,PROJECT_BUILD_TIME_W);
        return 0;
    }
}
