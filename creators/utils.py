import os

def create_file(file_path, content):
    with open(file_path, 'w') as f:
        f.write(content)
    print(f"Created file: {file_path}")
