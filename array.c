#include <cs50.h>
#include <stdio.h>

// clang -o array array.c -lcs50

int main(void)
{
    int numbers[2];
    numbers[0] = 5;
    numbers[1] = 6;

    printf("The average score is %i\n", numbers[0] + numbers[1] / 2);
}