#include <iostream>

double model(double x) {
    return -0.5 * x;
}

int main() {
    double x = 1.0;
    double dt = 0.1;

    for (int i = 0; i < 10; ++i) {
        x += dt * model(x);
        std::cout << x << '\n';
    }

    return 0;
}
