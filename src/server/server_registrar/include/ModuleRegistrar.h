#ifdef __cplusplus
extern "C"{
#endif
#include <stdint.h>
#include <stddef.h>

#ifndef OPVZ_MODULE_REGISTRAR_H
#define OPVZ_MODULE_REGISTRAR_H
#include "module_registrar_import.h"

typedef uint32_t (*ModuleMain)(int32_t,const char* const*);
typedef struct
{
    uint8_t MajorVersion;
    uint16_t MinorVersion;
    uint8_t PatchVersion;
    const char* ModuleName;
    const char* About;
    ModuleMain ModuleMainFunction;
}ModuleInformation;
int32_t module_registrar_api RegisterModule
    (
        int32_t* out_ModuleUID,
        const ModuleInformation* in_ModuleInformation
);
#endif
#ifdef __cplusplus
}
#endif