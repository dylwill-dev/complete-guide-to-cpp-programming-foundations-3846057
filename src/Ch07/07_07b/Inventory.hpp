#pragma once // Tells the compiler to only include this header file once (not all compilers support this)

#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    // Default Constructor
    Inventory();

    // Overloaded Constructor
    Inventory(int capacity_i);

    // Destructor
    ~Inventory();

    // Add item to inventory
    void addItem(const std::string& item);

    // Remove item from inventory
    void removeItem(const std::string& item);

    // Access item by index
    std::string getItem(int index)const;

    // Get number of items in the inventory
    int getItemCount() const;

    // Display inventory contents
    void displayInventory() const;

private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

#endif // INVENTORY_HPP
