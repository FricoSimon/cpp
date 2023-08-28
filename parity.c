#include <cs50.h>
#include <stdio.h>

// gcc -o parity parity.c -lcs50

int main (void) {
    int number = get_int("Number: ");

    if(number % 2 == 0) {
        printf("The %i is even\n", number);
    } else {
        printf("The %i is odd\n", number);  
    }
}