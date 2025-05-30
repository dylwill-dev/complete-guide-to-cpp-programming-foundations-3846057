// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

/*Taking arguments by value 
    - x is a copy of the argument passed in from main (in this case a)
    - Any modification to x here does not affect the original variable
    - It is safe and simple if you don't need to modify the input    
*/ 
int square(int x){
    x = x * x;
    return x;
}

/*Taking arugments as pointers
    - Takes a memory address as aruments
    - Must use the "addresss of (&)" to pass arguments into this function
    - Inside the function we need to dereference using * to access tha actual values to work with
    - This function modifies the original variables

*/ 
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

/*Takes arguments by reference
    - A more modern and cleaner approach instead of using pointers
    - No need to dereference within the body of the function
    - Modifies the original variables
    - Commonly used when you want to modify the inputs

Use Cases
    - You want to avoid copying large data
*/ 
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // Need to be passed as addresses because the function takes pointers.
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
