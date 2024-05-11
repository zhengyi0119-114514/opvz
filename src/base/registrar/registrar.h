#if !defined OPVZ_REGISTRAR
    #define OPVZ_REGISTRAR

#ifdef __cplusplus
extern "C"{
#endif

#include<stdint.h>
#include<stddef.h>
#include<uchar.h>

typedef struct
{
    uint32_t Size;
    uint8_t  MajorVersion;
    uint8_t  MinorVersion;
    uint16_t PatchVersion;
    char*    ModuleName;
    char*    About;
} ModuleInfofmation;
typedef void*(*ModuleMainFunction)(uint8_t,const char* const);
/*
TODO:More about RegModule
*/

void* RegisteredModule(
    ModuleMainFunction mainFunction,
    int32_t* const modID, 
    const ModuleInfofmation *const moduleInformation);

#ifdef __cplusplus
}
#endif
//Registrar
#endif