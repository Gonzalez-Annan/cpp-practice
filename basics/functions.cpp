#include <iostream>

int add(int a, int b) {
    return a + b;
}

double square(double x) {
    return x * x;
}

int main() {
    std::cout << add(4, 7) << '\n';
    std::cout << square(3.5) << '\n';
    return 0;
}
