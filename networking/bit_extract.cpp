#include <cstdint>
#include <iostream>

std::uint32_t extract_bits(
    std::uint32_t value,
    unsigned offset,
    unsigned width
) {
    std::uint32_t mask = (1u << width) - 1u;
    return (value >> offset) & mask;
}

int main() {
    std::uint32_t value = 0b11010110;
    std::cout << extract_bits(value, 2, 3) << '\n';
    return 0;
}
