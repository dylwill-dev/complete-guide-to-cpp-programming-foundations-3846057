// Complete Guide to C++ Programming Foundations
// Exercise 08_02
// Template Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

// Template function to calculate the size in bits of a given data type
template <typename T> // Here we define a template function with the type T which can be any data type. 
int size_in_bits(T a) {
    // In this function a is of type T, which can be any data type.
    // The sizeof operator returns the size of the type in bytes.
    // We multiply by 8 to convert bytes to bits.
    // The result is returned as an integer.
    // Note: sizeof is a compile-time operator, so it works with any type.
    return sizeof(a) * 8;
}

int main(){
    // Using the template function size_in_bits with different data types
    std::cout << size_in_bits(21) << std::endl;    // Integer
    std::cout << size_in_bits('f') << std::endl;   // Character
    std::cout << size_in_bits(32.1f) << std::endl; // Float
    std::cout << size_in_bits(32.1) << std::endl;  // Double

    std::cout<< "----------------------------------------" << std::endl;
    std::cout << size_in_bits((short)42) << std::endl; // Short
    std::cout << size_in_bits(123456789L) << std::endl;  // Long
    std::cout << size_in_bits(std::string("Hello")) << std::endl; // String
    std::cout << size_in_bits(true) << std::endl; // Bool
    
    std::cout << std::endl << std::endl;
    return 0;
}
