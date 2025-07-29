#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    ItemType charc;
    Stack stack;

    stack.push('1');
    stack.push('2');
    stack.push('3');
    stack.push('4');
    stack.push('5');
    stack.push('6');
    stack.push('7');
    stack.push('8');
    stack.push('9');

    stack.pop();
    cout << stack.getLength() << endl;

    stack.print();
}