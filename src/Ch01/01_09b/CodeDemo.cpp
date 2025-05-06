// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // This is needed to get a string from the user input

int main(){
    std::string name; // Declare a string variable called name
    std::cout << "Enter your name: " << std::flush; // flush makes sure that the output is completely sent to the terminal before waiting for user input

    // Gather input from terminal
    std::cin >> name; // The user input will be captured with cin and store it in name
                      // cin only works for single words or strings

    std::cout << "Your name is " << name << "! Nice to meet you!" << std::endl; // String concatenation 

    std::cout << std::endl << std::endl;
    return 0;
}