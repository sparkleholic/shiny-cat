#include <gtest/gtest.h>
#include "calc.h"

TEST(CalcTest, add)
{
	Calc calc;
	EXPECT_EQ(calc.add(1, 1), 2);
}
TEST(CalcTest, subtract)
{
	Calc calc;
	EXPECT_EQ(calc.subtract(1, 1), 0);
}
TEST(CalcTest, multiply)
{
	Calc calc;
	EXPECT_EQ(calc.multiply(1, 1), 1);
}
TEST(CalcTest, divide)
{
	Calc calc;
	EXPECT_EQ(calc.divide(1, 1), 1);
}
