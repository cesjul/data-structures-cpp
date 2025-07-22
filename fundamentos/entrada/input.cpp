#include <iostream>

int sum(int a, int b){
    int result = a + b;
    return result;
}

float floatSum(float a, float b){
    return (float) a + (float) b;
}


int main(){
    int number1;
    int number2;

    std::cout << "Type a number: ";
    std::cin >> number1;
    std::cout << "Type another one: ";
    std::cin >> number2;

    int result = sum(number1, number2);

    std::cout << "The sum is: ";
    std::cout << result;
    
    return 0;
}