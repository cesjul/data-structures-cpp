#include "item_type.h"

const int MAX_ITEM = 100;

class Stack{
    public:
        Stack(); // Constructor
        ~Stack(); // Destructor

        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        int getLength() const;

        void push(ItemType);
        ItemType pop();

    private:
        NodeType* structure;
};