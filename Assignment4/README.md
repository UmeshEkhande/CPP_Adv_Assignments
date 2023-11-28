# Assignment4: File reading using getline() function part2
 
## Overview
This assignment involves file reading in C++ to read and process triangle data from a file provided by user. `getline` function is used which allows accepting and reading single and multiple line strings from the input stream. `istringstream ` is utilized for string parsing,

## Code path

- **Location:** 
1. Declarion path : `\headers\Reader.h`
2. Definition path : `\src\Reader.cpp`
 
## Code overview

- The `Reader` class is responsible for reading data from a file and extracting information about triangles. It uses the `getTriangles` function to populate a vector of `Triangle` objects.
- `getline` function is used in `getTriangles` function
- `getTraingles` function opens the specified file (`mFilePath`)
- The code of getline looks like : `std::getline(dataFile, line)`
- The `std::getline` function will extract characters from the stream until it encounters a newline character (`\n`) or reaches the end of the file. The newline character is not included in the `line` string. 
