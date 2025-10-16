#include <iostream>
#include <utility>
#include <vector>

void bubble_sort(std::vector<int>& values) {
    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;

        for (std::size_t i = 0; i + 1 < end; ++i) {
            if (values[i] > values[i + 1]) {
                std::swap(values[i], values[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> values{8, 3, 1, 7, 4, 2};
    bubble_sort(values);

    for (int value : values) {
        std::cout << value << ' ';
    }

    std::cout << '\n';
    return 0;
}
