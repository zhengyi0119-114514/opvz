#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include "include/module_registrar_export.h"
#include "include/ModuleRegistrar.h"
ModuleInformation* module_registrar_hidden modules =(ModuleInformation*)NULL;
int32_t module_registrar_hidden module_count =-1;
int32_t module_registrar_api RegisterModule(int32_t* out_ModuleUID,const ModuleInformation* in_ModuleInformation)
{
    if((in_ModuleInformation==NULL)||(out_ModuleUID==NULL))
    {
        return 1;
    }
    else if 
    (   in_ModuleInformation->ModuleName
        && in_ModuleInformation->About
        && in_ModuleInformation->ModuleMainFunction) 
    {
        return 1;
    }
    if(module_count==0)
    {
        modules = (ModuleInformation*)malloc(sizeof(ModuleInformation)*1);
        module_count++;
    }
    else 
    {
        modules=(ModuleInformation*)realloc(modules,(module_count+1)*sizeof(ModuleInformation));
        module_count++;
    }
    char* name = (char*)malloc(strlen(in_ModuleInformation->ModuleName)+2);
    if(name ==NULL) return 2;
    strcpy(name,in_ModuleInformation->ModuleName);
    char* about = (char*)malloc(strlen(in_ModuleInformation->About)+2);
    if(about == NULL) return 2;
    strcpy(about,in_ModuleInformation->About);

    modules[(size_t)module_count].About=about;
    modules[(size_t)module_count].ModuleName=name;
    modules[(size_t)module_count].ModuleMainFunction=in_ModuleInformation->ModuleMainFunction;
    modules[(size_t)module_count].MajorVersion=in_ModuleInformation->MajorVersion;
    modules[(size_t)module_count].MinorVersion=in_ModuleInformation->MinorVersion;
    modules[(size_t)module_count].PatchVersion=in_ModuleInformation->PatchVersion;
    return 0;
}