// https://projecteuler.net/problem=7
// 
// 10001st prime
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?
#include <stdio.h>
#include <math.h>

int is_prime(int);

int main()
{
    int limit = 10001;
    int primes_found = 0;

    int i = 1;

    while (primes_found < limit)
    {
        if (is_prime(i))
        {
            primes_found++;
        }
        i++;
    }

    printf("\nThe 10,001st prime is %i\n", i);

    return 0;
}

int is_prime(int num)
{
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}