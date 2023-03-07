// Write a program to swap the values of two variables (Using 3rd variable)

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("\n\t--- Swapping values of two variables ---\n");
    printf("\t\t(Using 3rd Variable)\n\n");

    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);

    printf("\nBefore swapping :\n\t>> First value = %d\n\t>> Second value = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping :\n\t>> First value = %d\n\t>> Second value = %d\n", a, b);
}