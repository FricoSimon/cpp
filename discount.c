#include <cs50.h>
#include <stdio.h>

// clang -o discount discount.c -lcs50

float discount(float price, int percent);

int main(void)
{
    float basePrice = get_float("what is the base price? ");
    int percentage = get_int("what is the discount percentage? ");
    float finalPrice = discount(basePrice, percentage);
    printf("the final price is %.2f\n", finalPrice);
}

float discount(float price, int percent)
{
    return price * (100 - percent) / 100;
}