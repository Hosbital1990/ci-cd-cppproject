#include <gtest/gtest.h>
#include "order_service.h"

TEST(OrderServiceIntegrationTest, CalculatesOrderTotal)
{
    OrderService orderService;

    int total = orderService.calculateOrderTotal(20, 3);

    EXPECT_EQ(total, 60);
}