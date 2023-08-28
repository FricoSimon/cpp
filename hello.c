#include <cs50.h>
#include <stdio.h>

// make hello

int main(void)
{
    string name = get_string("what is your name? ");
    printf("hello, %s\n", name);
}