// Write a program to swap the values of two variables (Without using 3rd variable)

#include <stdio.h>
int main()
{
    int a, b;

    printf("\n\t--- Swapping values of two variables ---\n");
    printf("\t     (Without using 3rd Variable)\n\n");

    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);

    printf("\nBefore swapping :\n\t>> First value = %d\n\t>> Second value = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping :\n\t>> First value = %d\n\t>> Second value = %d\n", a, b);
}