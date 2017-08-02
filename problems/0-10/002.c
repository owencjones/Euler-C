// https://projecteuler.net/problem=2
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

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