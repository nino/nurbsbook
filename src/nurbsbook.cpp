#include "nurbsbook.hpp"

namespace nurbsbook {

int twice(int num) { return num * 2; }

double eval_polynomial(std::span<double> coefficients, double x) {
  auto result = 0.0;
  for (auto i = coefficients.size(); i > 0; i -= 1) {
    result = result * x + coefficients[i - 1];
  }
  return result;
}

double bernstein(int i, int n, double u) {

}

Eigen::Vector3d stretch(Eigen::Vector3d input) { return input * 3.3; }

}; // namespace nurbsbook
