// https://projecteuler.net/problem=5
//
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <stdio.h>
int is_divisible(int);

int main()
{
    int number_under_test = 2520;
    while (!is_divisible(number_under_test))
    {
        number_under_test = number_under_test + 20;
    }
    printf("%i is the smallest number divisible by 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19, and 20.\n", number_under_test);
}

int is_divisible(int value)
{
    for (int i = 1; i <= 20; i++)
    {
        if (value % i != 0) {
            return 0;
        }
    }
    return 1;
}