# Create a library containing our business logic
add_library(fizzbuzz_lib STATIC
    fizzbuzz.cpp
)

# Create the executable that uses the library
add_executable(my_app main.cpp)

# Link the library to the executable
target_link_libraries(my_app PRIVATE fizzbuzz_lib)