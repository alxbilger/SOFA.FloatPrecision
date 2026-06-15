import sys
import re
import os
from creators.cmake import create_root_cmake, create_config_cmake_in
from creators.docs import create_readme
from creators.src import create_init_h, create_init_cpp, create_config_h_in, create_components_cpp


def print_help():
    print("Usage: python plugin_maker.py <float_precision>")
    print("  <float_precision>: Floating point type (e.g. float, double, long double)")
    print("\nThis script creates a SOFA plugin to compile components using specific floating point precision.")

def main():
    if len(sys.argv) != 2:
        print("Error: Please provide exactly one command line argument: float_precision")
        print_help()
        sys.exit(1)

    script_path = os.path.dirname(os.path.realpath(__file__))
    float_precision = sys.argv[1]
    float_precision_name = float_precision.replace(" ", "")
    plugin_name = "Sofa.Component." + float_precision_name
    print(f"Plugin name: {plugin_name}")

    # Check if a folder with the plugin_name already exists in the path
    plugin_path = os.path.join(script_path, plugin_name)
    print(f"Plugin path: {plugin_path}")
    if os.path.exists(plugin_path):
        print(f"Error: A folder named '{plugin_name}' already exists in '{script_path}'")
        sys.exit(1)

    # If we get here, both arguments are valid
    print(f"Path '{plugin_path}' is valid")

    upper_plugin_name = plugin_name.upper()
    namespace = plugin_name.lower().replace("-", "").replace("_", "").replace(".", "")
    plugin_symbol = upper_plugin_name.replace("-", "_").replace(".", "_")

    # Create the main plugin folder
    if not os.path.exists(plugin_path):
        os.makedirs(plugin_path)
        print(f"Created folder: {plugin_path}")
        cmake_file = os.path.join(script_path, "CMakeLists.txt")
        
        # check if line exists
        exists = False
        if os.path.exists(cmake_file):
            with open(cmake_file, "r") as f:
                 if f"sofa_add_subdirectory(plugin {plugin_name} {plugin_name})" in f.read():
                     exists = True
        
        if not exists:
            with open(cmake_file, "a") as f:
                f.write(f"\nsofa_add_subdirectory(plugin {plugin_name} {plugin_name})\n")
            print(f"Updated {cmake_file}")

    create_root_cmake(plugin_path, plugin_name, plugin_symbol)
    create_config_cmake_in(plugin_path, plugin_name)

    create_readme(plugin_path, plugin_name, float_precision)

    # Create src folder and plugin subfolder
    src_path = os.path.join(plugin_path, "src")
    os.makedirs(src_path)
    print(f"Created folder: {src_path}")

    plugin_src_path = os.path.join(src_path, plugin_name)
    os.makedirs(plugin_src_path)
    print(f"Created folder: {plugin_src_path}")

    create_init_h(plugin_src_path, plugin_name, namespace, plugin_symbol)
    create_init_cpp(plugin_src_path, plugin_name, namespace, plugin_symbol)
    create_config_h_in(plugin_src_path, plugin_name, namespace, plugin_symbol)
    create_components_cpp(plugin_src_path, plugin_name, namespace, plugin_symbol, float_precision)


if __name__ == "__main__":
    main()
