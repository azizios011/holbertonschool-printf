# _printf function
The _printf function is a custom implementation of the printf function in C. It takes a format string and a variable number of arguments, and prints the formatted output to the standard output.
# Usage
To use the _printf function, include the header file main.h in your C file, and call the function with the appropriate format string and arguments.


#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("The value of pi is approximately %f.\n", 3.14159265359);
    _printf("The answer to the ultimate question is %d.\n", 42);
    return (0);
}

In the above example, the _printf function is used to print a string, a floating-point number, and an integer to the standard output.

# Supported Formats
The _printf function supports the following format specifiers:

1. %c: print a single character
2. %s: print a null-terminated string
3. %d or %i: print a signed integer
4. %%: print a percent sign

# Return Value

The _printf function returns the number of characters printed to the standard output, excluding the null byte at the end of the output. If an error occurs, it returns a negative value.

# Contributors

This implementation of _printf was written by [Azizios] for [C - printf]. Feel free to use, modify, and distribute this code as needed.
