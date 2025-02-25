#!/bin/bash

TEMPLATE_FILE="/Users/karthickraja/Mycode/c++/cpp_template.cpp"
TARGET_DIR="/Users/karthickraja/Mycode/c++"

# Function to apply the skeleton code
apply_skeleton() {
    local new_file="$1"
    if [ ! -s "$new_file" ]; then  # Check if the file is empty
        echo "Applying skeleton to $new_file"
        cp "$TEMPLATE_FILE" "$new_file"
    else
        echo "$new_file is not empty, skipping skeleton application."
    fi
}

# Check if the new file is a .cpp file and empty
if [[ "$1" == *.cpp ]]; then
    apply_skeleton "$TARGET_DIR/$1"
fi
