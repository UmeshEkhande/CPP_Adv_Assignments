# Assignment 1 - Reader Class
 
## Overview
 
This assignment involves the function declaration in a class named `Reader` in the `/Ex1/headers/Reader.h` file. The class is designed to read the stl file.
 
## Class Definition
 
1. **Class File:**
   - Class Definition: `/headers/Reader.h`
   - Implementation: `/src/Reader.cpp`
 
2. **Constructor:**
   - Write a constructor for `Reader` that takes one string as arguments.
   - Initializes member variables with the provided argument value.
   - Example `mFilePath = filePath;`

 
## Test Program
 
1. **Test Program File:**
   - Test Program: `/src/Reader.cpp`
 
2. **Usage:**
   - The test program usages the `mFilePath` variable
   - Follwing is the memeber function of  `Reader.cpp` where `mFilePath` variable is used
   1. `getTriangles`
   - `getTraingles` function is called in `main.cpp` by creating object of class `Reader`
