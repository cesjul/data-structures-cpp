#include "queue.h"
#include <cstddef>
#include <iostream>

Queue::Queue(){
    front = NULL;
    rear = NULL;
}

Queue::~Queue(){
    NodeType* tempPtr;
    while(front != NULL){
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

bool Queue::isFull() const{
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    } catch(std::bad_alloc exception){
        return true;
    }
}

bool Queue::isEmpty() const{
    return (front == NULL);
}

void Queue::enqueue(ItemType newItem){
    if (!isFull()){
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL){
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
    } else {
        throw "Queue is already Full";
    }
}

ItemType Queue::dequeue(){
    if (!isEmpty()){
        NodeType* tempPtr;
        tempPtr = front;
        ItemType item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        
        delete tempPtr;
        return item;
    } else {
        throw "Queue is empty!";
    }
}