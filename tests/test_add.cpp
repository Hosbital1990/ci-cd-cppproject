#include <gtest/gtest.h>
#include "add.h"

struct AddCase {
    int a;
    int b;
    int expected;
};

class AddParameterizedTest
    : public testing::TestWithParam<AddCase>
{
};

TEST_P(AddParameterizedTest, ReturnsExpectedResult)
{
    AddCase testCase = GetParam();

    EXPECT_EQ(add(testCase.a, testCase.b), testCase.expected);
}

INSTANTIATE_TEST_SUITE_P(
    DifferentInputs,
    AddParameterizedTest,
    testing::Values(
        AddCase{2, 3, 5},
        AddCase{2, 2, 4},
        AddCase{-2, -3, -5},
        AddCase{-5, 8, 3},
        AddCase{100, 200, 300}
    )
);