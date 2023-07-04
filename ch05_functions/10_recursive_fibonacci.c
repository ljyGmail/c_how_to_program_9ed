#include <stdio.h>

unsigned long long fibonacci(int number);

int main(void)
{
    // calculate and display fibonacci(number) for 0-10
    // for (int number = 0; number <= 10; number++)
    // {
    //     printf("Fibonacci(%d) = %llu\n", number, fibonacci(number));
    // }

    // printf("Fibonacci(20) = %llu\n", fibonacci(20));
    // printf("Fibonacci(30) = %llu\n", fibonacci(30));
    // printf("Fibonacci(40) = %llu\n", fibonacci(40));
    fibonacci(4);
}

// Recursive definition of function fibonacci
unsigned long long fibonacci(int n)
{
    printf("Current n: %d\n", n);
    if (n == 0 || n == 1) // base case
    {
        return n;
    }
    else // recursive step
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}