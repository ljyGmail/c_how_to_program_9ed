#include <stdio.h>
// define array sizes
#define RESPONSE_SIZE 20
#define FREQUENCY_SIZE 6

int main(void)
{
    // place the survey responses in the responses array
    int responses[RESPONSE_SIZE] = {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = {0};

    // for each answer, select the value of an element of the array
    // responses and use that value as a subscript into the array
    // frequency to determine the element to increment
    for (size_t answer = 0; answer < RESPONSE_SIZE; ++answer)
    {
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%12s\n", "Rating", "Frequency");

    // output the frequencies in a tabular format
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating)
    {
        printf("%6zu%12d\n", rating, frequency[rating]);
    }
}
