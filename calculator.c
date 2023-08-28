#include <cs50.h>
#include <stdio.h>

// gcc -o calculator calculator.c -lcs50

int main (void) {
    int x =  get_int("x: ");
    int y = get_int("y: ");

    int z = x + y;

    printf("%i\n", z);
}