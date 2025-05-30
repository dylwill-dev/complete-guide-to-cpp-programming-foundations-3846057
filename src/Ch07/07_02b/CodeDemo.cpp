// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
/*
    Keep in mind that we are just using string types for the inventory when in reality these items could be from other classes such as 
    (potions, armour, weapons, consumables, treasure, etc.) and could inherit from a father class that allows them to be stored within the 
    inventory despite being instances from different classes.
*/

class Inventory{

private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Max number of items allowed

public:
    // Default Constructor
    Inventory(): capacity(10){
        // capacity = 10; moved up with different syntax
        items = new std::vector<std::string>(); // Create the vector to store the elements of strings
    }

    // Overloaded Constructor
    Inventory(int alteredCapacity) : capacity(alteredCapacity){
        // this->capacity = alteredCapacity; moved up with different syntax
        items = new std::vector<std::string>();
    }

    // Destroyer
    ~Inventory(){
        delete items; // Prevent memory leak by deallocating the dynamic vector
    }


    // Add item to inventory
    void addItem(const std::string& item){
        if(items->size() < capacity){
            items->push_back(item);
        }
        else{
            std::cout << "Inventory is full, cannot add " << item << std::endl;
        }
    }

    // Remove item from inventory
    void removeItem(const std::string& item){
        auto itr = std::find(items->begin(), items->end(), item); // Function that searches through to from start point to end point to find a specific element
        if (itr != items->end()){
            items->erase(itr); // If it is found, erase it
        }
        else{
            std::cout << "Item " << item << " was not found in the inventory" << std::endl; 
        }
    }

    // Access item by index
    std::string getItem(int index) const{
        if(index >= 0 && index < items->size())
            return (*items)[index];
        else{
            return "Index out of bounds";
        }
    }

    // Get number of items in the inventory
    int getItemCount() const{
        return items->size();
    }

    // Display inventory contents
    void displayInventory() const{
        std::cout << "Inventory: [";
        for(i : *items){
            std::cout << i;
            if (i < items -> size() - 1) std::cout << ", ";
        }
        
//        for(size_t i = 0 ; i < items -> size() ; i++){
//            std::cout << (*items)[i];
//            if (i < items -> size() - 1) std::cout << ", ";
//        }
        std::cout << " ]" << std::endl;
    }


};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
