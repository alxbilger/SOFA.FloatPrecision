import json
import os
from .utils import create_file

def create_init_h(plugin_src_path, plugin_name, namespace, plugin_symbol):
    init_h_content = f"""#pragma once
#include <{plugin_name}/config.h>

namespace {namespace}
{{

/** Initialize the {plugin_name} plugin */
void {plugin_symbol}_API initializePlugin();

}}
"""
    create_file(os.path.join(plugin_src_path, "init.h"), init_h_content)

def create_init_cpp(plugin_src_path, plugin_name, namespace, plugin_symbol):
    init_cpp_content = f"""#include <{plugin_name}/init.h>
#include <sofa/core/ObjectFactory.h>

namespace {namespace}
{{

void initializePlugin() 
{{
    static bool first = true;
    if (first) {{
        first = false;
    }}
}}

extern void registerComponents(sofa::core::ObjectFactory* factory);

}}

extern "C" 
{{
    {plugin_symbol}_API void initExternalModule() 
    {{
        {namespace}::initializePlugin();
    }}

    {plugin_symbol}_API const char* getModuleName() 
    {{
        return {namespace}::MODULE_NAME;
    }}

    {plugin_symbol}_API const char* getModuleVersion() 
    {{
        return {namespace}::MODULE_VERSION;
    }}

    {plugin_symbol}_API const char* getModuleLicense() 
    {{
        return "LGPL";
    }}

    {plugin_symbol}_API const char* getModuleDescription() 
    {{
        return "SOFA plugin for {plugin_name}";
    }}
    
    void registerObjects(sofa::core::ObjectFactory* factory)
    {{
        {namespace}::registerComponents(factory);
    }}
}}
"""
    create_file(os.path.join(plugin_src_path, "init.cpp"), init_cpp_content)

def create_config_h_in(plugin_src_path, plugin_name, namespace, plugin_symbol):
    config_h_content = f"""#pragma once
#include <sofa/config.h>

#ifdef SOFA_BUILD_{plugin_symbol}
#  define SOFA_TARGET @PROJECT_NAME@
#  define {plugin_symbol}_API SOFA_EXPORT_DYNAMIC_LIBRARY
#else
#  define {plugin_symbol}_API SOFA_IMPORT_DYNAMIC_LIBRARY
#endif

namespace {namespace}
{{
    constexpr const char* MODULE_NAME = "@PROJECT_NAME@";
    constexpr const char* MODULE_VERSION = "@PROJECT_VERSION@";
}}
"""
    create_file(os.path.join(plugin_src_path, "config.h.in"), config_h_content)

def create_components_cpp(plugin_src_path, plugin_name, namespace, plugin_symbol, float_precision):
    components_path = os.path.join(os.path.dirname(__file__), "components.json")
    with open(components_path, encoding="utf-8") as components_file:
        components = json.load(components_file)

    additional_includes_path = os.path.join(os.path.dirname(__file__), "additional_includes.txt")
    with open(additional_includes_path, encoding="utf-8") as additional_includes_file:
        additional_includes = additional_includes_file.read().splitlines()

    additional_includes = [f"#include <{include}>\n" for include in additional_includes]
    additional_includes = "".join(additional_includes)
    additional_includes = "// Additional includes\n" + additional_includes + "\n\n"

    include_list = ""
    for component, struct in components.items():
        for include in struct["includes"]:
            include_list += f"#if __has_include(<{include}>)\n"
            include_list += f"#include <{include}>\n"
            include_list += "#endif\n"

    explicit_template_instantiation = ""
    for component, struct in components.items():
        explicit_template_instantiation += "\n"
        explicit_template_instantiation += f"// Explicit template instantiation for {component}\n"
        for template_list in struct["templates"]:
            templates = ", ".join(template_list)
            explicit_template_instantiation += f"template class {plugin_symbol}_API {struct['namespace']}::{component}<{templates}>;\n"

    factory_registration = ""
    for component, struct in components.items():
        factory_registration += f"factory->registerObjects(sofa::core::ObjectRegistrationData(R\"({struct["description"]})\")\n"
        for template_list in struct["templates"]:
            templates = ", ".join(template_list)
            factory_registration += f"    .add<{struct['namespace']}::{component}<{templates}>>()\n"
        factory_registration += ");\n\n"


    components_cpp_content = f"""#include <{plugin_name}/config.h>
#include <sofa/core/ObjectFactory.h>
#include <sofa/defaulttype/VecTypes.h>

{include_list}
{additional_includes}

#if __has_include(<stdfloat>)
    #include <stdfloat>
#endif

namespace {namespace}
{{
using Real = {float_precision};

using Vec1_ = sofa::type::Vec<2, Real>;
using Vec1Types_ = sofa::defaulttype::StdVectorTypes<Vec1_, Vec1_, Real>;

using Vec2_ = sofa::type::Vec<2, Real>;
using Vec2Types_ = sofa::defaulttype::StdVectorTypes<Vec2_, Vec2_, Real>;

using Vec3_ = sofa::type::Vec<3, Real>;
using Vec3Types_ = sofa::defaulttype::StdVectorTypes<Vec3_, Vec3_, Real>;

using Vec6_ = sofa::type::Vec<6, Real>;
using Vec6Types_ = sofa::defaulttype::StdVectorTypes<Vec6_, Vec6_, Real>;

using Rigid3Types_ = sofa::defaulttype::StdRigidTypes<3, Real>;
using Rigid2Types_ = sofa::defaulttype::StdRigidTypes<2, Real>;

using CRS_Scalar = sofa::linearalgebra::CompressedRowSparseMatrix<Real>;
using CRS_Block3x3 = sofa::linearalgebra::CompressedRowSparseMatrix<sofa::type::Mat<3,3,Real>>;
using FullVector = sofa::linearalgebra::FullVector<Real>;

{explicit_template_instantiation}

void registerComponents(sofa::core::ObjectFactory* factory)
{{
{factory_registration}
}}
}}
    """

    create_file(os.path.join(plugin_src_path, "Components.cpp"), components_cpp_content)