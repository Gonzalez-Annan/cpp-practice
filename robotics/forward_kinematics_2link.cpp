#include <cmath>
#include <iostream>
#include <utility>

std::pair<double, double> forward_kinematics(
    double theta1,
    double theta2,
    double length1,
    double length2
) {
    double x =
        length1 * std::cos(theta1)
        + length2 * std::cos(theta1 + theta2);

    double y =
        length1 * std::sin(theta1)
        + length2 * std::sin(theta1 + theta2);

    return {x, y};
}

int main() {
    constexpr double pi = 3.14159265358979323846;

    auto position = forward_kinematics(
        30.0 * pi / 180.0,
        45.0 * pi / 180.0,
        1.0,
        0.7
    );

    std::cout << position.first << ", " << position.second << '\n';
    return 0;
}
