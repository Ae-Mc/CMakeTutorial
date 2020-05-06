#include <iostream>
#ifndef CMAKEMACROSAMPLE
    #define CMAKEMACROSAMPLE "NO SYSTEM NAME PROVIDED"
#endif

auto sum(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello CMake" << std::endl;
    std::cout << "OS: " << CMAKEMACROSAMPLE << std::endl;
    std::cout << "2 + 3 = " << sum(2, 3) << std::endl;
    return 0;
}
