// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int *scorePtr = highScores;   // Pointer initialized to the address of the array not needing the & (address of operator)

    /*
        We could have wrote it like this as well 
        int *scorePtr = &highScores[0];
        But it is not needed for arrays
    */


    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer (initially at index highScores[0])

    std::cout << "Second high score using pointer: " << *(scorePtr + 1) << std::endl; // Dereference pointer and add 1 to access next int in the array (highScores[0]) adding an offset to the address.

    std::cout << "Third high score using array notation: " << scorePtr[2] << std::endl; // Treats pointer as an array and dereference at that offset all at once.


    std::cout << std::endl << std::endl;
    return 0;
}
