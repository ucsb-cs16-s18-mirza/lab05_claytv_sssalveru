// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    


// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include "utility.h"
#include <cmath> 

bool numsApproxEqual(double num1, double num2, double tolerance){

	return fabs(num1 - num2) < tolerance;
 

}