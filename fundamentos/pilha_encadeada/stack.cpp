#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    structure = NULL;
}

Stack::~Stack(){
    NodeType* tempPtr;
    while (structure != NULL){
        tempPtr = structure;
        structure = structure -> next;
        delete tempPtr;
    }
}

bool Stack::isEmpty() const{
    return (structure == NULL);
}

bool Stack::isFull() const{
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    } catch(std::bad_alloc exception){
        return true;
    }
}

void Stack::push(ItemType item){
    if (!isFull()){
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = structure;
        structure = location;
    } else {
        throw "Stack is already full!";
    }
}

ItemType Stack::pop(){
    if(!isEmpty()){
        NodeType* tempPrt;
        tempPrt = structure;
        ItemType item = structure->info;
        structure = structure->next;
        delete tempPrt;
        return item;
    } else {
        throw "Stack is empty";
    }
}

void Stack::print() const{
    NodeType* tempPtr = structure;
    while(tempPtr != NULL){
        cout << tempPtr->info << "\n";
        tempPtr = tempPtr->next;
    }
    cout << endl;
}