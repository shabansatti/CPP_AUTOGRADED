#include <gtest/gtest.h>
#include "../include/student_code.h"

TEST(SumUpToTest, PositiveNumbers)
{
    EXPECT_EQ(sumUpTo(5), 15);
    EXPECT_EQ(sumUpTo(10), 55);
}

TEST(SumUpToTest, EdgeCases)
{
    EXPECT_EQ(sumUpTo(1), 1);
    EXPECT_EQ(sumUpTo(0), 0);
    EXPECT_EQ(sumUpTo(-5), 0);
}
