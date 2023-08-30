#include <stdio.h>

int main(void)
{
    char word[] = "hello!";

    for (int i = 0; word[i] != '\0'; i++)
    {
        printf("Character: %c\n", word[i]);
        printf("Memory address: %p\n", &word[i]);
        printf("ASCII value: %d\n", (int)word[i]);
    }

    return 0;
}
