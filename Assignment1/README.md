# Assignment 1 - Point3D Class
 
## Overview
 
This assignment involves the function declaration of a class named `Reader` in the `/Ex1/headers/Reader.h` file. The class is designed to read the stl file.
 
## Class Definition
 
1. **Class File:**
   - Class Definition: `/Ex1/headers/Reader.h`
   - Implementation: `/Ex1/src/Reader.cpp`
 
2. **Constructor:**
   - Write a constructor for `Reader` that takes one string as arguments.
   - Initializes member variables with the provided argument values.
   - Example `mFilePath = filePath;`

 
## Test Program
 
1. **Test Program File:**
   - Test Program: `/Ex1/src/Reader.cpp`
 
2. **Usage:**
   - The test program usages the `mFilePath` variable
   - Follwing are the memeber function of  `Reader.cpp` where `mFilePath` variable is used
   1. `getTriangles`
   2. `getPoints`
   3. `getTrianglesNormals`
   4. `getPointsFromSTL`
 