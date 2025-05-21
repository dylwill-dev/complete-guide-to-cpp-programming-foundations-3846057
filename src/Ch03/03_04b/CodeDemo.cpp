// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    // Initial Values of score and lives
    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    std::cout << "Score using postfix increment: " << player_score++ << std::endl; // Increments after the current value is used in expression

    // Prefix increment
    std::cout << "Score using prefix increment: " << ++player_score << std::endl; // Increments before the current value is used in expression

    // Postfix decrement
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl; // Increments after the current value is used in expression

    // Prefix decrement
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl; // Increments before the current value is used in expression

    std::cout << std::endl << std::endl;
    return 0;
}