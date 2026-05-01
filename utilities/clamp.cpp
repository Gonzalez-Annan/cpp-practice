#include <iostream>

template <typename T>
T clamp_value(T value, T minimum, T maximum) {
    if (value < minimum) {
        return minimum;
    }

    if (value > maximum) {
        return maximum;
    }

    return value;
}

int main() {
    std::cout << clamp_value(-5, 0, 10) << '\n';
    std::cout << clamp_value(3, 0, 10) << '\n';
    std::cout << clamp_value(15, 0, 10) << '\n';

    return 0;
}
