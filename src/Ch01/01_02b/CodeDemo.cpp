// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> //Part of the C++ standard library that allows for printing to the console and taking input from the keyboard
#include <cstdio> // Allows for C type intput and output shown in section 2

int main(){

    // Using <iostream> library 
    std::cout << "Hi there! This is done in C++ fashion!" << std::endl; // std::endl puts an endline character at the end
    std::cout << std::endl << std::endl; // Gives some additional space between input

    // Using <cstdio> library
    printf("This is done with C style! \n");
    printf("\n\n"); // Give some space

    return 0;
}