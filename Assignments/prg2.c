//               Write a program in C to make a Simple Calculator
// (Taking two inputs & Calculate their Addition, Subtraction, Multiplication, Division)

#include <stdio.h>
int main()
{
    float a, b, add, sub, mult, div;

    printf("\n\t---- Simple Calculator ----\n");
    printf("Enter two numbers: \n");
    scanf("%f%f", &a, &b);

    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Addition of %0.2f and %0.2f is = %0.2f\n", a, b, add);
    printf("Subtraction from %0.2f to %0.2f is = %0.2f\n", a, b, sub);
    printf("Multiplication of %0.2f and %0.2f is = %0.2f\n", a, b, mult);
    printf("Division of %0.2f by %0.2f is = %0.2f\n", a, b, div);

    return 0;
}