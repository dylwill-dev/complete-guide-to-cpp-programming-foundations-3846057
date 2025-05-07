// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // Declare global variables a and b and initialize b to 5

int main(){
    
    bool my_flag;
    a = 7;
    my_flag = false;
    unsigned int positive;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag = true;

    std::cout << "flag 2 = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    positive = b - a;
    std::cout << "b - a unsigned = " << positive << std::endl;

    std::cout << std::endl << std::endl;


    return 0;
}
