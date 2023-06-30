#include <stdio.h>

int square(int x); // prototype for function square

int main(void)
{
    int a = 10; // value to square (local variable in main)

    printf("%d squared: %d\n", a, square(a)); // display a squared
}

// return the square of an integer
int square(int x) // x is a local variable
{
    return x * x; // calculate square and return result
}