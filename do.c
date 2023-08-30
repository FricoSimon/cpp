#include <cs50.h>
#include <stdio.h>

// clang -o do do.c -lcs50

int main(void)
{
    int n;

    do
    {
        n = get_int("size: ");
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}