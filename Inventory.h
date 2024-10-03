#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory {
private:
    std::vector<Item*> m_Items;  // Stores pointers to Item objects
    static unsigned int m_ItemsMade;  // Tracks the number of items made

public:
    Inventory() = default;
    ~Inventory() {
        for (auto item : m_Items) {
            delete item;  // Clean up dynamically allocated memory for each Item*
        }
        m_Items.clear();  // Clear the vector to avoid dangling pointers
    }

    void AddItem(Item* item) {
        m_Items.push_back(item);
        m_ItemsMade++;  // Increment the counter when an item is added
    }

    void Print() const {
        size_t* nSize = new size_t(m_Items.size());
        std::cout << "_____INVENTORY_____\n";
        for (unsigned int i = 0; i < *nSize; ++i) {
            m_Items[i]->Print();
        }
        delete nSize;  // Fix memory leak by deleting the dynamically allocated size_t
    }
};

// Initialize the static member variable outside the class definition


#endif // INVENTORY_H
