# pragma once
#include <iostream>


class Calculator {

    public:
    Calculator();
    ~Calculator();
    
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    float divide(int a, int b);

    private: 
    
    int counter;
    int getCounter() const;
        
};           