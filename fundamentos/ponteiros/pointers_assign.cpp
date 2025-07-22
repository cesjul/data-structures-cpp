#include <iostream>

using namespace std;

int main(){
    int *pointer1 = new int;
    *pointer1 = 100;
    int *pointer2 = new int;

    cout << "pointer 1 memory address: " << pointer1
    << " | pointer 1 value assigned: " << *pointer1 << "\n";

    cout << "pointer 2 memory address: " << pointer2 << endl;

    delete pointer1;
    delete pointer2;
}