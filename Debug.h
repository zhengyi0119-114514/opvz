#ifndef __cplusplus
#include<stdbool.h>
#endif 
#ifdef NDEBUG
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
    char a =0;
    scanf_s("%c",&a);
}