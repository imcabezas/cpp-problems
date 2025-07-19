#include <gtest/gtest.h>

#include "../src/fizzbuzz.hpp"

// This is a basic test case.
// It defines a Test Suite named "HouseKeeping" and a Test named "HelloGtest".
TEST(HouseKeeping, HelloGtest) {
    // ASSERT_EQ checks if its two arguments are equal.
    // This is a trivial test to make sure the framework is working.
    ASSERT_EQ(1, 1);
}


// This test checks the functionality of fizz_buzz_naive defined in src/main.cpp
TEST(FizzBuzzTests, FizzBuzzNaive) {
    EXPECT_EQ(fizz_buzz_naive(1), "1");
    EXPECT_EQ(fizz_buzz_naive(2), "2");
    EXPECT_EQ(fizz_buzz_naive(3), "Fizz");
    EXPECT_EQ(fizz_buzz_naive(4), "4");
    EXPECT_EQ(fizz_buzz_naive(5), "Buzz");
    EXPECT_EQ(fizz_buzz_naive(15), "FizzBuzz");
}

// This test checks the functionality of fizz_buzz_function defined in src/main.cpp
TEST(FizzBuzzTests, FizzBuzzFunction) {
    EXPECT_EQ(fizz_buzz_function(1), "1");
    EXPECT_EQ(fizz_buzz_function(2), "2");
    EXPECT_EQ(fizz_buzz_function(3), "Fizz");
    EXPECT_EQ(fizz_buzz_function(4), "4");
    EXPECT_EQ(fizz_buzz_function(5), "Buzz");
    EXPECT_EQ(fizz_buzz_function(15), "FizzBuzz");
}

// The main function for the test executable is boilerplate.
// It initializes Google Test and runs all the tests discovered in this file.
// You usually don't need to touch this.
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}