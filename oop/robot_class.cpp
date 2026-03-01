#include <iostream>
#include <string>
#include <utility>

class Robot {
public:
    Robot(std::string name, double mass)
        : name_(std::move(name)), mass_(mass) {}

    void describe() const {
        std::cout << "Robot: " << name_ << '\n';
        std::cout << "Mass: " << mass_ << " kg\n";
    }

private:
    std::string name_;
    double mass_;
};

int main() {
    Robot robot("Atlas", 89.0);
    robot.describe();
    return 0;
}
