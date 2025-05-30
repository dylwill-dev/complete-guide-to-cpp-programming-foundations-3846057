// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

/*
    Prototypes are given before the main function so that the implementations of the functions can be after main with no issues. This is common in 
    larger or multi-file programs and lets you separate declarations (in headers) from definitions (in source files). 
*/

// These are the prototypes to the functions
std::string getPlayerName();
int calculateScore(int baseScore, int multiplier);
void displayScore(const std::string&, int);


int main(){
    std::string playerName = getPlayerName();
    int score = calculateScore(75, 2);

    displayScore(playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}


std::string getPlayerName(){
    return "Alex";
}

int calculateScore(int baseScore, int multiplier){
    return baseScore * multiplier;
}

void displayScore(const std::string& name, int score){
    
    std::cout << name << " scored " << score << " points." << std::endl;
}


