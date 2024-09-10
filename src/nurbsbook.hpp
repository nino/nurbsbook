#pragma once

#include <span>
#include <Eigen/StdVector>

namespace nurbsbook {

int twice(int num);

/// Evaluate a polynomial using Horner's algorithm
double eval_polynomial(std::span<double> coefficients, double x);

/// Evaluate B_{i,n}(u).
double bernstein(int i, int n, double u);

Eigen::Vector3d stretch(Eigen::Vector3d input);


}; // namespace nurbsbook
