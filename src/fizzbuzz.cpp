#include "fizzbuzz.hpp"

std::string fizz_buzz_naive(unsigned int n) {
    if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
    if (n % 3 == 0) return "Fizz";
    if (n % 5 == 0) return "Buzz";
    return std::to_string(n);
}

// fizzbuzz using std::function
std::string fizz_buzz_function(unsigned int n) {
  static const std::function<std::string(unsigned int)> actions[] = {
    [](unsigned int n) { return std::to_string(n); },
    [](unsigned int n) { return "Fizz"; },
    [](unsigned int n) { return "Buzz"; },
    [](unsigned int n) { return "FizzBuzz"; },
  };

  unsigned int idx = (n % 3 == 0) + 2 *(n % 5 == 0);
  return actions[idx](n);
}
