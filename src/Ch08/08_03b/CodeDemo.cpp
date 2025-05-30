// Complete Guide to C++ Programming Foundations
// Exercise 08_03
// Template Classes, by Eduardo Corpeño 

#include <iostream>

// GameEntity template class for storing positions in 2D space

template <typename T> // T is a placeholder for any data type
class GameEntity {
    T x, y;  // x and y positions of the entity
public:
    // Constructor to initialize the entity's position
    GameEntity(T xPos, T yPos) : x(xPos), y(yPos) {}
    
    // Function to print the entity's position
    void printPosition() {
        std::cout << "Position: (" << x << ", " << y << ")" << std::endl;
    }
};

int main(){
    GameEntity<int> enemy(10, 20);  // Position with integers
    std::cout << "Enemy ";
    enemy.printPosition();

    GameEntity<float> treasure(15.5f, 25.5f); // Position with floats
    std::cout << "Treasure ";
    treasure.printPosition();

    GameEntity<double> player(30.123, 40.456); // Position with doubles
    std::cout << "Player ";
    player.printPosition();

    GameEntity<char> character('A', 'B'); // Position with characters

    std::cout << std::endl << std::endl;
    return 0;
}
