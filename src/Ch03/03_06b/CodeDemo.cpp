// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// Directives do not end with a semi-colon
#define MAX_AMMO 500

#define DEBUG // This will force the #infdef DEBUG to run on lines 19-20

int main(){
    // These int types come from cstdint
    int32_t ammo = MAX_AMMO / 5;         
    uint8_t health_items = 5;

    // This will run only of #define DEBUG is included 
    #ifdef DEBUG
        std::cout << "[DEBUG] Starting game simulation..." << std::endl;
    #endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
