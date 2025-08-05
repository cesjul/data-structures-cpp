#include "item_type.h"

class Queue{
    public:
        Queue();
        ~Queue();

        bool isEmpty() const;
        bool isFull() const;
        void print() const;

        void enqueue(ItemType);
        ItemType dequeue();
    
    private:
        int front;
        int back;
        ItemType* structure;
};