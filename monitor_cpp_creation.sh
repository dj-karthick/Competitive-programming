#!/bin/bash

MONITOR_DIR="/Users/karthickraja/Mycode/c++"
CHECK_INTERVAL=10 # Interval in seconds

while true; do
    for file in $(ls -t "$MONITOR_DIR"/*.cpp 2>/dev/null); do
        if [ -e "$file" ]; then
            # Apply the skeleton to the new .cpp file
            /Users/karthickraja/Mycode/c++/apply_skeleton.sh "$(basename "$file")"
        fi
    done
    sleep $CHECK_INTERVAL
done
