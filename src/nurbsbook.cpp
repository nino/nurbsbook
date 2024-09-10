#include "nurbsbook.hpp"

#include <ranges>

namespace nurbsbook {

int twice(int num)
{
    return num * 2;
}

double eval_polynomial(std::span<double> coefficients, double x)
{
    auto result = 0.0;
    for (auto coeff : coefficients | std::views::reverse) {
        result = result * x + coeff;
    }
    return result;
}

double bernstein(int i, int n, double u)
{
    int* my_prointer = nullptr;
}

Eigen::Vector3d stretch(Eigen::Vector3d input)
{
    return input * 3.3;
}

}; // namespace nurbsbook
