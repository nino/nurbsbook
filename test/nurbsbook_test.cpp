#include "../src/nurbsbook.hpp"
#include <gtest/gtest.h>
#include <vector>

TEST(NurbsBookTest, Twice1) { EXPECT_EQ(6, nurbsbook::twice(3)); }

TEST(NurbsBookTest, Twice2) { EXPECT_EQ(6, nurbsbook::twice(3)); }

TEST(NurbsBookTest, Polynomial1) {
  std::vector<double> coeffs = {0, 1, 2};
  auto actual = nurbsbook::eval_polynomial(coeffs, 0);
  EXPECT_EQ(actual, 0);
}
