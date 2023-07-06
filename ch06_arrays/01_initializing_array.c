#include <stdio.h>

int main(void)
{
    int n[5]; // n is an array of five integers

    // set elements of array n to 0
    for (size_t i = 0; i < 5; ++i) // type size_t is defined in header <stddef.h>, which is often included by other headers (such as <stdio.h>).
    {
        n[i] = 0; // set element at location i to 0
    }

    printf("%s%8s\n", "Element", "Value");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%7zu%8d\n", i, n[i]); // The conversion specification %zu is used to display size_t values.
    }
}