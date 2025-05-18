// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_character buddy; // Create an instance of the struct game_character and call him buddy.
    // To access members within the struct we use standard dot notation. 
    buddy.name = "Tony";
    buddy.level = 1;
    buddy.role = character_role::sidekick; 
    
    std::cout << buddy.name << " is level a level " << buddy.level << " character with the role of " << (int) buddy.role << "." << std::endl;

    game_character main;
    main.name = "Hero";
    main.level = 100;
    main.role = character_role::protagonist;

    std::cout << main.name << " is the main character and is level " << main.level << ". His role is number " << (int) main.role << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
