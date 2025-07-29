#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    length = 0;
    structure = new ItemType[MAX_ITEM];
}

Stack::~Stack(){
    delete [] structure;
}

bool Stack::isEmpty() const{
    return length == 0;
}

bool Stack::isFull() const{
    return length == MAX_ITEM;
}

int Stack::getLength() const{
    return length;
}

void Stack::push(ItemType item){
   if (!this->isFull()){
    length++;
    structure[length - 1] = item;
   } else {
    throw "Stack is full";
   }
}

ItemType Stack::pop(){
    if(this->isEmpty()){
      throw "Stack is empty";
    } else {
        length--;
        ItemType aux = structure[length];
        return aux;
    }
}

void Stack::print() const{
    if(this->isEmpty()){
        throw "Stack is empty";
    } else {
        cout << "Stack : " << *structure << " = {";
        for (int i = 0; i < length; i++){
            if ((length - 1) == i){
                cout << structure[i];
            } else {
                cout << structure[i] << ", ";
            }
        }
        cout << "}" << endl;
    }
}