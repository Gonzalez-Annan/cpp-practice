#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& values, int target) {
    int low = 0;
    int high = static_cast<int>(values.size()) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (values[mid] == target) {
            return mid;
        }

        if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> data{1, 4, 7, 9, 13, 21, 42};
    std::cout << binary_search(data, 13) << '\n';
    return 0;
}
