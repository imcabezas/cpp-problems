#include "fizzbuzz.hpp"
#include <iostream>



int main() {
    std::cout << "FizzBuzz" << std::endl;

    for (unsigned int i = 1; i <= 15; ++i) {
        std::cout << " fizz_buzz_naive(" << i << ") = " << fizz_buzz_naive(i) << std::endl;
        std::cout << " fizz_buzz_function(" << i << ") = " << fizz_buzz_function(i) << std::endl;
    }
    
    return 0;
}