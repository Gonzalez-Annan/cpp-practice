#include <iostream>
#include <stdexcept>
#include <vector>

class Stack {
public:
    void push(int value) {
        items_.push_back(value);
    }

    int pop() {
        if (items_.empty()) {
            throw std::runtime_error("empty stack");
        }

        int value = items_.back();
        items_.pop_back();
        return value;
    }

private:
    std::vector<int> items_;
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);

    std::cout << stack.pop() << '\n';
    return 0;
}
