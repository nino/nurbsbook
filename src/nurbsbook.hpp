#pragma once

#include <span>
namespace nurbsbook {

int twice(int num);

/// Evaluate a polynomial using Horner's algorithm
double eval_polynomial(std::span<double> coefficients, double x);

}; // namespace nurbsbook
