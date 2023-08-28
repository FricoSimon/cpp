#include <stdio.h>

// call hello function
void hello(int n);

// main function
int main(void)
{
    hello(3);
}

// define hello function
void hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("hello!\n");
    }
}