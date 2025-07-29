#include <iostream>
#include "time.h"

using namespace std;

int main(){
    Time t1(12, 43, 30);

    t1.print();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.nextSecond();
    t1.print();
}