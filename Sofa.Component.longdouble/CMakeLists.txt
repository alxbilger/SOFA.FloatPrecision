# CMakeLists.txt for Sofa.Component.longdouble plugin
cmake_minimum_required(VERSION 3.12)
project(Sofa.Component.longdouble VERSION 1.0 LANGUAGES CXX)

find_package(Sofa.Core REQUIRED)

set(HEADER_FILES
    src/Sofa.Component.longdouble/config.h.in
    src/Sofa.Component.longdouble/init.h
)

set(SOURCE_FILES
    src/Sofa.Component.longdouble/init.cpp
    
    src/Sofa.Component.longdouble/Components.cpp
)

add_library(${PROJECT_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PUBLIC Sofa.Component)

sofa_create_package_with_targets(
    PACKAGE_NAME ${PROJECT_NAME}
    PACKAGE_VERSION ${PROJECT_VERSION}
    TARGETS ${PROJECT_NAME} AUTO_SET_TARGET_PROPERTIES
    INCLUDE_SOURCE_DIR "src"
    INCLUDE_INSTALL_DIR ${PROJECT_NAME}
    RELOCATABLE "plugins"
    )
