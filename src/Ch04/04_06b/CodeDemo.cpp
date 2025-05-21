// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector> // Include this to use Vectors

#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    std::vector<int> population;

    // Since vectors are unlimited in size, we can push values (as long as they are a string) to the back of the vector.
    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    population.push_back(0);
    population.push_back(3);
    population.push_back(43);

    std::cout << "The game has " << checkpoints.size() << " checkpoints." << std::endl; // Counting the number of elements in the list.

    
    std::cout << "The checkpoint at index 2 is the " << checkpoints[2] << " and the population there is: " <<population[2] << std::endl;
    
    checkpoints[2] = "Dark Castle"; // Can re-assign values within the Vector.
    population[2] = 6;

    std::cout << "The castle has been taken by darkness and is now known as the " << checkpoints[2] << ", with a population of only: " <<population[2] << std::endl;

    
    
    
    std::cout << std::endl << std::endl;
    return 0;
}
