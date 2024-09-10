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

TEST(NurbsBookTest, Polynomial2) {
  using nurbsbook::eval_polynomial;

  std::vector<double> coeffs = {3.2, 6, 8.2, -5.2, 3.0};
  auto epsilon = 0.000001;
  EXPECT_NEAR(eval_polynomial(coeffs, 0), 3.2, epsilon);
  EXPECT_NEAR(eval_polynomial(coeffs, 0.1), 3.8771, epsilon);
  EXPECT_NEAR(eval_polynomial(coeffs, 0.25), 5.14296875, epsilon);
  EXPECT_NEAR(eval_polynomial(coeffs, 10.25), 28440.76796875, epsilon);
  EXPECT_NEAR(eval_polynomial(coeffs, 2.1), 62.1491, epsilon);
  EXPECT_NEAR(eval_polynomial(coeffs, 212.1), 6022085007.109099, epsilon);
}
