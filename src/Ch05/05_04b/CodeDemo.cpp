// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58}; // Declaration of the vector playerScore

    //std::vector<int>::iterator 
    auto scorePtr = playerScores.begin(); // Iterator declaration to traverse the vector w;hich is an integer type

    // While loop using an iterator (pointer)
    while(scorePtr != playerScores.end()){
        std::cout << *scorePtr << " ";
        scorePtr = next(scorePtr,1);
    }
    std::cout << std::endl;

    // Do-while loop using an integer and indexing
    int i = 0;
    do{
        std::cout << playerScores[i] << " ";
        i++;

    }while(i < playerScores.size());
    
    std::cout << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
