#include "test.h"

void testSum(int (*func)(int, int)){

    assert(func(1, 2) == 3);
    std::cout << "Test 1 succeed\n";

    assert(func(2, 1) == 3);
    std::cout << "Test 2 succeed\n";

    assert(func(-2, 2) == 0);
    std::cout << "Test 3 succeed\n";

}