#include <iostream>

using namespace std;

int ARRAY_LEN;

void insertInArray(int* a, int length){
    for (int i = 0; i < length; i++){
        a[i] = 3 * i;
    }
}

int main(){
    int* c = new int[ARRAY_LEN];

    insertInArray(c, ARRAY_LEN);

    cout << c << endl;
}