# Assignment 7 - mutable lamda Expression with variable modifies in capture clause

## Overview

This assignment involves the usage of the mutable lamda expression and initializing a memeber variable in Capture Clause itself. 

## Code Path ##
[/src/Reader.cpp](https://github.com/UmeshEkhande/CPP_Adv_Assignments/blob/main/Assignment7/src/Reader.cpp)
## Code Overview ##
- This lamda function is called if the condition of if conidtional statement in `getTriangles` function matched.
- The returned string is printed in `getTriangles` function
- Mutable lamda expression code 
`auto getErrorStatus = [mErrorMsg= "File not exist"]()mutable{return mErrorMsg;};`
