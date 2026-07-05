#include "calculator.h"
#include <iostream>


//** Constructor*/

Calculator::Calculator() :counter(0) {

    std::cout << "Calculator object created\n";

}


Calculator::~Calculator(){

    std::cout << "Calculator object destroyed\n";
}

int Calculator::add(int a, int b){

    return a + b;
}

int Calculator::subtract(int a, int b){
    return a - b;
}

int Calculator::multiply(int a, int b){
    
    return a * b;
}
float Calculator::divide(int a, int b){
    if (b == 0) {
        std::cerr << "Error: Division by zero\n";
        return 0;
    }
    return static_cast<float>(a) / b;
}

