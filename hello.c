#include <cs50.h>
#include <stdio.h>

// clang -o hello hello.c -lcs50

int main(void)
{
    string name = get_string("what is your name? ");
    printf("hello, %s\n", name);
}