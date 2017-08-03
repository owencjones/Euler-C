// https://projecteuler.net/problem=3
//
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int is_prime(uint64_t);

int main()
{
    uint64_t input = 600851475143;
    uint64_t i;
    uint64_t highest_prime_factor = 1;

    printf("Searching for highest prime of %" PRIu64 "\n\n", input);

    uint64_t current_numerator = input;
    uint64_t current_denominator = 2;
    while ((current_denominator * current_denominator) <= current_numerator)
    {
        if (current_numerator % current_denominator == 0)
        {
            current_numerator = current_numerator / current_denominator;
            if (current_denominator > highest_prime_factor)
            {
                highest_prime_factor = current_denominator;
            }
        } else {
            current_denominator++;
        }
    }

    printf("The highest prime factor of %" PRIu64 " is %" PRIu64 "\n\n", input, highest_prime_factor);
    return 0;
}