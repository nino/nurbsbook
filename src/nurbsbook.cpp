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

}; // namespace nurbsbook
