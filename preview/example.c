// This is a simple C program that demonstrates basic syntax and features.

#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Variable declaration
    char greeting[] = "Hello, world!";

    // Printing the greeting
    printf("%s\n", greeting);

    // Calling the add function and printing the result
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);

    return 0;
}
