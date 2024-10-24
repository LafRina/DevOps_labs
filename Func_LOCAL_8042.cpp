#include "func.h"
#include <cmath>

double FuncA::compute(double x, int n) {
    double sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += pow(-1, i) * pow(x, 2*i) / tgamma(2*i + 1);
    }
    return sum;
}


