#include <iostream>
#include "lib/math/operations.hpp"

#ifndef CMAKEMACROSAMPLE
    #define CMAKEMACROSAMPLE "NO SYSTEM NAME PROVIDED"
#endif

int main() {
    std::cout << "Hello CMake" << std::endl;
    math::operations op;
    std::cout << "2 + 3 = " << op.sum(2, 3) << std::endl;
    return 0;
}
