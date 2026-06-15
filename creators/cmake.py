import os
from .utils import create_file

def create_root_cmake(plugin_path, plugin_name, plugin_symbol):
    cmake_content = f"""# CMakeLists.txt for {plugin_name} plugin
cmake_minimum_required(VERSION 3.12)
project({plugin_name} VERSION 1.0 LANGUAGES CXX)

find_package(Sofa.Core REQUIRED)

set(HEADER_FILES
    src/{plugin_name}/config.h.in
    src/{plugin_name}/init.h
)

set(SOURCE_FILES
    src/{plugin_name}/init.cpp
    
    src/{plugin_name}/Components.cpp
)

add_library(${{PROJECT_NAME}} SHARED ${{HEADER_FILES}} ${{SOURCE_FILES}})
target_link_libraries(${{PROJECT_NAME}} PUBLIC Sofa.Component)

sofa_create_package_with_targets(
    PACKAGE_NAME ${{PROJECT_NAME}}
    PACKAGE_VERSION ${{PROJECT_VERSION}}
    TARGETS ${{PROJECT_NAME}} AUTO_SET_TARGET_PROPERTIES
    INCLUDE_SOURCE_DIR "src"
    INCLUDE_INSTALL_DIR ${{PROJECT_NAME}}
    RELOCATABLE "plugins"
    )
"""
    create_file(os.path.join(plugin_path, "CMakeLists.txt"), cmake_content)

def create_config_cmake_in(plugin_path, plugin_name):
    config_cmake_content = f"""# CMake package configuration file for the plugin @PROJECT_NAME@

@PACKAGE_GUARD@
@PACKAGE_INIT@

find_package(Sofa.Component QUIET REQUIRED)

if(NOT TARGET @PROJECT_NAME@)
    include("${{CMAKE_CURRENT_LIST_DIR}}/@PROJECT_NAME@Targets.cmake")
endif()

check_required_components({plugin_name})
"""
    create_file(os.path.join(plugin_path, f"{plugin_name}Config.cmake.in"), config_cmake_content)
