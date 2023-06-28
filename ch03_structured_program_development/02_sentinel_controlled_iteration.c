#include <stdio.h>

int main(void)
{
    // initialization phase
    int total = 0;   // initialize total
    int counter = 0; // initialize loop counter

    // processing phase
    // get first grade from user
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    int grade = 0;                            // grade value
    scanf("%d", &grade);                      // read grade from user

    // loop while setinel value not yet read from user
    while (grade != -1)
    {
        total += grade; // add grade to total
        counter++;      // increment counter

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade);                      // read next grade
    }

    // termination phase
    // if user entered at least one grade
    if (counter != 0)
    {
        // calculate average of all grades entered
        double average = (double)total / counter; // avoid truncation

        // display average with two digits of precision
        printf("Class average is %.2f\n", average);
    }
    else
    {
        // if no grades were entered, output message
        puts("No grades were entered");
    }
}