#include "gtest/gtest.h"
#include "tunnel/calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, AddWorks) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-2, 3), 1);
    EXPECT_EQ(calc.add(0, 0), 0);
    EXPECT_EQ(calc.add(-4, -5), -9);
}

TEST_F(CalculatorTest, SubtractWorks) {
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(3, 5), -2);
}

TEST_F(CalculatorTest, MultiplyWorks) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 5), 0);
}

TEST_F(CalculatorTest, DivideWorks) {
    EXPECT_DOUBLE_EQ(calc.divide(6, 3), 2.0);
    EXPECT_DOUBLE_EQ(calc.divide(5, 2), 2.5);
    EXPECT_THROW(calc.divide(5, 0), std::invalid_argument);
}