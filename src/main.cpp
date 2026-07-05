#include <iostream>
#include "order_service.h"

int main()
{
    OrderService orderService;

    int price = 20;
    int quantity = 3;

    int total = orderService.calculateOrderTotal(price, quantity);

    std::cout << "Order total: " << total << '\n';

    return 0;
}