#ifndef __cplusplus
#include<stdbool.h>
#endif 

//判断是否为调试模式
#if (defined NDEBUG)||(!defined _DEBUG)
//生成
#define IsDebug() ((bool)(0))
#define RunIfDebug(c) 
#define RunIfNoDebug(c) c
#else
//调试
#define IsDebug() ((bool)(1))
#define RunIfDebug(c) c
#define RunIfNoDebug(c)
#endif

#ifndef __STDC_WANT_LIB_EXT1__
#define __STDC_WANT_LIB_EXT1__

#endif

#include <stdio.h>
inline void ReadAnyKey()
{
    if(IsDebug())
    {
        wchar_t a =0;
        scanf_s("%lc",&a,sizeof(a));
    }
}
