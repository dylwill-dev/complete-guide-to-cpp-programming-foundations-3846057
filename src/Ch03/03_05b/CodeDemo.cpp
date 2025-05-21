// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    // Print out initial values
    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10;
    std::cout << "Ammo amount after finding more: " << ammo << std::endl;

    // Subtraction assignment
    ammo -= 5;
    std::cout << "Ammo after letting off some shots: " << ammo << std::endl;

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout << "Zombies doubled after timeout: " << incoming_zombies << std::endl;

    // Division assignment
    ammo /= 2;
    std::cout << "Ammo after sharing half with ally: " << ammo << std::endl;
    
    // Remainder assignment
    ammo %= 6; 
    std::cout << "Ammo in mag after losing supplies: " << ammo << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
