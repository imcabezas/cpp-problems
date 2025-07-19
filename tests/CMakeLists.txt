# Find the Google Test package that the Dev Container feature installed for us.
# The 'REQUIRED' keyword will cause an error if it's not found.
find_package(GTest REQUIRED)

# Create test executable
add_executable(run_tests     
    test_fizzbuzz.cpp
)

# Link against both Google Test AND our business logic library
target_link_libraries(run_tests 
    PRIVATE 
    GTest::GTest 
    GTest::Main
    fizzbuzz_lib  # This is the key addition!
)

# Include the GoogleTest module to add support for CTest.
include(GoogleTest)

# This powerful command automatically discovers all TEST() macros in our
# executable and registers them as individual tests with CTest.
gtest_discover_tests(run_tests)