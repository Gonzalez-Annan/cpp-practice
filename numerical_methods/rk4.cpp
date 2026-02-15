#include <iostream>

double model(double x) {
    return -x;
}

double rk4_step(double x, double dt) {
    double k1 = model(x);
    double k2 = model(x + dt * k1 / 2.0);
    double k3 = model(x + dt * k2 / 2.0);
    double k4 = model(x + dt * k3);

    return x + dt * (k1 + 2.0 * k2 + 2.0 * k3 + k4) / 6.0;
}

int main() {
    double x = 1.0;

    for (int i = 0; i < 10; ++i) {
        x = rk4_step(x, 0.1);
        std::cout << x << '\n';
    }

    return 0;
}
