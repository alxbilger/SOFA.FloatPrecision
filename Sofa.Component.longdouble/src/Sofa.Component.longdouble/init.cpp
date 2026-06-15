#include <Sofa.Component.longdouble/init.h>
#include <sofa/core/ObjectFactory.h>

namespace sofacomponentlongdouble
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
    SOFA_COMPONENT_LONGDOUBLE_API void initExternalModule() 
    {
        sofacomponentlongdouble::initializePlugin();
    }

    SOFA_COMPONENT_LONGDOUBLE_API const char* getModuleName() 
    {
        return sofacomponentlongdouble::MODULE_NAME;
    }

    SOFA_COMPONENT_LONGDOUBLE_API const char* getModuleVersion() 
    {
        return sofacomponentlongdouble::MODULE_VERSION;
    }

    SOFA_COMPONENT_LONGDOUBLE_API const char* getModuleLicense() 
    {
        return "LGPL";
    }

    SOFA_COMPONENT_LONGDOUBLE_API const char* getModuleDescription() 
    {
        return "SOFA plugin for Sofa.Component.longdouble";
    }
    
    void registerObjects(sofa::core::ObjectFactory* factory)
    {
        sofacomponentlongdouble::registerComponents(factory);
    }
}
