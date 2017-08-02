#include <stdio.h>
int main()
{
    unsigned int first = 1, second = 2, next = 0, total = 0;

    while (first < 4000000)
    {
        if (first % 2 == 0) {
            printf("%i is an even fibonacci number\n", first);
            total = total + first;
        }

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n\nThe sum of Fibonacci numbers below 4 million is %i\n\n", total);

    return 0;
}