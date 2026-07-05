#pragma once

#include "calculator.h"

class OrderService
{
public:
    int calculateOrderTotal(int price, int quantity);

private:
    Calculator calculator;
};