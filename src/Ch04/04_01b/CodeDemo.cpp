// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT]; // Declaring array with 4 empty spaces
    float levelDifficulty[] = {1.0f, 3.5f, 6.0f, 10.5f}; // Declaring and populating array

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    
    std::cout << std::endl << std::endl;
    return 0;
}
