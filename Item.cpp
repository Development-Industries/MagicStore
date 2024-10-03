#include "Item.h"
#include <iostream>

// Constructor
Item::Item(const char* _name, int _value)
    : m_Name(_name), m_Value(new int(_value)) {}

// Destructor
Item::~Item() {
    delete m_Value;  // Free the dynamically allocated memory for m_Value
}

// Print function
void Item::Print() const {
    std::cout << m_Name << "\t" << *m_Value << std::endl;
    // No need to allocate additional memory here, just print m_Value directly
}

