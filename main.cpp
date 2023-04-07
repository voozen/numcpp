#include <iostream>

#define eps 0.0001

double func(double x) {
    return x * x * x - x * x + 2;
}

double deriv(double x) {
    return 3 * x * x - 2 * x;
}

void bisection(double a, double b) {
    double x;
    while (std::abs(b - a) > eps) {
        x = (a + b) / 2;
        if (func(x) == 0) return;
        else {
            if (func(a) * func(x) < 0) {
                b = x;
            } else a = x;
        }
    }
    std::cout << x << std::endl;
}

void newtonRaphson(double x) {
    double g = func(x) / deriv(x);
    while (std::abs(g) >= eps) {
        g = func(x) / deriv(x);
        x -= g;
    }
    std::cout << x << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    bisection(-100, 100);
    newtonRaphson(-10);
}
