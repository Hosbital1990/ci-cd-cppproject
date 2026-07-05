#include "order_service.h"

int OrderService::calculateOrderTotal(int price, int quantity)
{
    return calculator.multiply(price, quantity);
}