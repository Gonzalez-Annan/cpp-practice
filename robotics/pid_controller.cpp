#include <iostream>

class PID {
public:
    PID(double kp, double ki, double kd)
        : kp_(kp), ki_(ki), kd_(kd) {}

    double update(double setpoint, double measurement, double dt) {
        double error = setpoint - measurement;
        integral_ += error * dt;

        double derivative = 0.0;
        if (dt > 0.0) {
            derivative = (error - previous_error_) / dt;
        }

        previous_error_ = error;

        return kp_ * error
             + ki_ * integral_
             + kd_ * derivative;
    }

private:
    double kp_;
    double ki_;
    double kd_;
    double integral_ = 0.0;
    double previous_error_ = 0.0;
};

int main() {
    PID controller(1.0, 0.2, 0.05);
    std::cout << controller.update(10.0, 7.5, 0.01) << '\n';
    return 0;
}
