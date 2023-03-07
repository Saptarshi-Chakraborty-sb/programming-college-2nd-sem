// Write a C program to find out the Area of a Circle

#define _USE_MATH_DEFINES // to use the in-built constant value of Pi
#include <stdio.h>
#include <math.h>
int main()
{
    float r, area;

    printf("\n\t---- Calculate area of a Circle ----\n\n");
    printf("Enter the radius of a circle : ");
    scanf("%f", &r);

    area = M_PI * r * r; // M_PI is a constant value of Pi

    printf("Area of a circle with radius %0.2f is = %0.3f square unit\n", r, area);

    return 0;
}