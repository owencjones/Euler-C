// https://projecteuler.net/problem=4
//
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
#include <stdio.h>
#include <string.h>
int is_palindrome(int);

int main ()
{
    int number_a = 100;
    int number_b = 999;
    int highest_palindrome = 0;
    int limit = 100;

    while (number_b >= limit)
    {
        number_a = 100;
        while (number_a <= 999)
        {
            int multiplication = number_a * number_b;
            if (is_palindrome(multiplication) && (multiplication > highest_palindrome))
            {
                highest_palindrome = multiplication;
            }
            number_a++;
        }
        number_b--;
        limit++;
    }

    printf("The highest palindromic number multiplied of two 3 digit numbers is %i\n\n", highest_palindrome);

    return 0;
}

int is_palindrome(int value)
{
    char word[10];
    sprintf(word, "%i", value);

    int left_pos = 0;
    int right_pos = (int) strlen(word) - 1;
    float middle = strlen(word) / 2.0f;

    while (left_pos < middle) {
        if (word[left_pos] != word[right_pos])
        {
            return 0;
        }

        left_pos++;
        right_pos--;
    }

    return 1;
}
