#include <iostream>

using namespace std;

int main(){
    int *intPointer;
    int integer = 10;
    intPointer = &integer;

    int anotherInt;

    anotherInt = *intPointer;

    cout << intPointer << endl;

}