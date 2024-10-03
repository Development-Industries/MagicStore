#include "Store.h"

// Properly define the constructor here
Store::Store(unsigned int numInventories)
    : m_NumInventories(numInventories), m_Inventories(new Inventory[numInventories]) {}

// Properly define the destructor here
Store::~Store() {
    delete[] m_Inventories; // Free allocated memory to prevent leaks
}

// Properly define the Print function here
void Store::Print() const {
    for (unsigned int i = 0; i < m_NumInventories; ++i) {
        m_Inventories[i].Print();
    }
}

