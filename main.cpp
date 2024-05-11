#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include "Information.h"
#include "./Debug.h"
#include <assert.h>


int main (int agvc,char** agvs)
{
    if((agvc > 1 && (!strcmp(agvs[1],"-v")||!strcmp(agvs[1],"--version")))||IsDebug())
    {
        wprintf_s(L"project:%ls version:%ls "
            "buildtime:%ls \n",
            PROJECT_NAME_W,PROJECT_VERSION_W,PROJECT_BUILD_TIME_W);
        RunIfNoDebug(return 0);
    }
    assert(IsDebug());
    printf_s("\n\n");
    ReadAnyKey();
}