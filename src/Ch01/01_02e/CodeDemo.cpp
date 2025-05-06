// Complete Guide to C++ Programming Foundations
// Exercise 01_02 
// DECLARATIONS AND EXPRESSIONS
#include <iostream>

int main(){
    int a = 10;      // Declaration statement
    int b = 3;      // Declaration statement
    int c = a + b;  // Declaration statement with an expression

    if (c > 5) {    // Conditional statement with an expression
        std::cout << "C is greater than 5"; // Output to console

        std::cout << std::endl << std::endl; // Add extra space
    }
    else{
        std::cout << "C is less than 5";

        std::cout << std::endl << std::endl; // Add extra space
    }
    return 0;
}
