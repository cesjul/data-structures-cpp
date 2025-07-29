#include <iostream>

const int ARRAY_LEN = 10;

int main(){
    int c[ARRAY_LEN];

    c[0] = 10;
    c[1] = 20;

    for (int i = 0; i < ARRAY_LEN; i++){
        c[i] = 2 * i;
        std::cout << "c[" << i << "] = " << c[i] << std::endl;
    }
}