#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>
#include <sstream>

#include "utility.hpp"
#include "cola.hpp"

void test_flag();
void test_args();
void test_vector_args();
void test_vector_initialize();
void test_rest_arg();
void usage_example();


int main()
{
    test_flag();
    test_args();
    test_vector_args();
    test_vector_initialize();
    test_rest_arg();
    std::cout << "\033[32m[[[ ALL TEST PASSED! ]]]\033[m\n" << std::endl;

    usage_example();

    return 0;
}


