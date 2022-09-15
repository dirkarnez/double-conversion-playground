#include <iostream>
#include "double-conversion/utils.h"
#include "double-conversion/ieee.h"

using namespace double_conversion;

int main(int argc, char **argv)
{
    uint64_t ordered = DOUBLE_CONVERSION_UINT64_2PART_C(0x01234567, 89ABCDEF);
    uint64_t min_double64 = DOUBLE_CONVERSION_UINT64_2PART_C(0x00000000, 00000001);
    uint64_t max_double64 = DOUBLE_CONVERSION_UINT64_2PART_C(0x7fefffff, ffffffff);
    
    std::cout << Double(ordered).value() << std::endl;
    std::cout << Double(min_double64).value() << std::endl;
    std::cout << Double(max_double64).value() << std::endl;
    std::cin.get();
    return 0;
}
