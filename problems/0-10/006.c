// https://projecteuler.net/problem=6
//
// The sum of the squares of the first ten natural numbers is,
// 12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int square_summed = 0;
    int summed_squared = 0;

    for(int i = 1; i <= 100; i++)
    {
        square_summed = square_summed + (i * i);
        summed_squared = summed_squared + i;
    }
    summed_squared = summed_squared * summed_squared;

    int difference = abs(summed_squared - square_summed);
    printf("Integer set: 1 - 100\nSum of squared integers: %i\nSquare of summed integers: %i\nDifference: %i", square_summed, summed_squared, difference);

    return 0;
}