#include "./registrar.h"
#include <vector>
#include <map>
#include <string>
#include <functional>
namespace opvz::registrar
{
    static std::map<std::string,Module>* ModuleList;
    class Module
    {
        public:
        explicit Module();
        Module(const ModuleInfofmation* const from);
        operator ModuleInfofmation();

        std::function<void*(uint8_t,const char* const)> MainFunction;
        uint8_t MajorVersion;
        uint8_t MinorVersion;
        uint16_t PatchVersion;
        std::string ModuleName;
        std::string About;
    };
    
}