#include <gtest/gtest.h>
#include "calculator.h"

// Test for the add function
TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-2, -3), -5);
    EXPECT_EQ(calc.add(-5, 8), 3);
}

// Test for the subtract function
TEST(CalculatorTest, Subtract) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(10, 3), 7);
    EXPECT_EQ(calc.subtract(-5, -3), -2);
}

// Test for the multiply function
TEST(CalculatorTest, Multiply) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(4, 5), 20);
    EXPECT_EQ(calc.multiply(-3, 4), -12);
}

// Test for the divide function
TEST(CalculatorTest, Divide) {
    Calculator calc;
    EXPECT_EQ(calc.divide(10, 2), 5);
    EXPECT_EQ(calc.divide(-10, 2), -5);
}          