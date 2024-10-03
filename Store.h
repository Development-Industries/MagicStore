#ifndef STORE_H
#define STORE_H

#include "Inventory.h"

class Store {
private:
    Inventory* m_Inventories;
    unsigned int m_NumInventories; // Fix: Ensure this is declared

public:
    Store(unsigned int numInventories = 10); // Constructor declaration
    ~Store(); // Destructor declaration
    void Print() const; // Print function declaration
};

#endif // STORE_H


