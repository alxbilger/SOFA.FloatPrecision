#include <Sofa.Component.float/init.h>
#include <sofa/core/ObjectFactory.h>

namespace sofacomponentfloat
{

void initializePlugin() 
{
    static bool first = true;
    if (first) {
        first = false;
    }
}

extern void registerComponents(sofa::core::ObjectFactory* factory);

}

extern "C" 
{
    SOFA_COMPONENT_FLOAT_API void initExternalModule() 
    {
        sofacomponentfloat::initializePlugin();
    }

    SOFA_COMPONENT_FLOAT_API const char* getModuleName() 
    {
        return sofacomponentfloat::MODULE_NAME;
    }

    SOFA_COMPONENT_FLOAT_API const char* getModuleVersion() 
    {
        return sofacomponentfloat::MODULE_VERSION;
    }

    SOFA_COMPONENT_FLOAT_API const char* getModuleLicense() 
    {
        return "LGPL";
    }

    SOFA_COMPONENT_FLOAT_API const char* getModuleDescription() 
    {
        return "SOFA plugin for Sofa.Component.float";
    }
    
    void registerObjects(sofa::core::ObjectFactory* factory)
    {
        sofacomponentfloat::registerComponents(factory);
    }
}
