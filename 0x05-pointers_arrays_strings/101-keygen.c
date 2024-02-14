#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum = 2772;
    int rand_char;
    srand(time(NULL));

    while (sum > 122)
    {
        rand_char = rand() % 94 + 33; /* ASCII characters between '!' (33) and '~' (126) */
        putchar(rand_char);
        sum -= rand_char;
    }

    putchar(sum);

    return (0);
}
