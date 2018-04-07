#include "bar.h"

#include "gtest/gtest.h"

TEST(Bar, DecrementsZero) {
  EXPECT_EQ(-1, Bar(0));
}

TEST(Bar, DecrementsPositive) {
  EXPECT_EQ(1, Bar(2));
}

TEST(Bar, DecrementsNegative) {
  EXPECT_EQ(-2, Bar(-1));
}

