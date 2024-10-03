#ifndef ITEM_H
#define ITEM_H

#include <iostream>

class Item {
private:
    const char* m_Name;
    int* m_Value;

public:
    Item(const char* _name, int _value); // Constructor declaration
    ~Item(); // Destructor declaration
    void Print() const; // Print function declaration
};

#endif // ITEM_H
