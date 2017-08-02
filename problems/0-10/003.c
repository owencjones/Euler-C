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

    for (i = 2; i <= input; i++)
    {
        if (input % i == 0)
        {
            if (is_prime(i))
            {
                highest_prime_factor = i;
            }
        }
    }

    printf("The highest prime factor of %" PRIu64 " is %" PRIu64 "\n\n", input, highest_prime_factor);

    return 0;
}

int is_prime(uint64_t value)
{
    for (uint64_t i = 2; i <= value; i++)
    {
        if (value %i == 0)
        {
            return 0;
        }
    }
    return 1;
}