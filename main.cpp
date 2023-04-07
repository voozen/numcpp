#include <iostream>

#define eps 0.001

double func(double x) {
    return x*x*x - x*x + 2;
}

void bisection(double a, double b) {
    double x;
    while (b - a > eps) {
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

int main() {
    std::cout << "Hello, World!" << std::endl;
    bisection(-100, 100);
}
