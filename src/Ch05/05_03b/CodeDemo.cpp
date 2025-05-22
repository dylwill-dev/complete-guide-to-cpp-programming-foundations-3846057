// Complete Guide to C++ Programming Foundations
// Exercise 05_03
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    switch (operation){
        case '+': // Addition
            result = operand_1 + operand_2; 
            break;
        case '-': // Subtraction
            result = operand_1 - operand_2;
            break;
        case '*': // Multiplication
            result = operand_1 * operand_2;
            break;
        case '/': // Division
            result = operand_1 / operand_2;
            break; 
        default: // If the entered operand isn't valid
            result = operand_1 + operand_2;
            break;
    }
    
    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
