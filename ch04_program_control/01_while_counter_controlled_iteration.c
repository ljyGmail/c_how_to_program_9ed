#include <stdio.h>

int main(void)
{
    int counter = 1; // initialization

    while (counter <= 5)
    {
        printf("%d ", counter); // iteration condition
        ++counter;              // increment
    }

    puts("");
}