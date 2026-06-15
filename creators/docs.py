import os
from .utils import create_file

def create_readme(plugin_path, plugin_name, float_precision):
    readme_content = f"""# {plugin_name}

## Description
A SOFA plugin providing components with the floating point precision: {float_precision}
"""
    create_file(os.path.join(plugin_path, "README.md"), readme_content)
