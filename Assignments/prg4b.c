//             Convert  Ferenheight to Centigrade
//                Equation: (c/5) = (F - 32)/9

#include <stdio.h>
int main() {
	float c, f;
	printf("\n\t\t---- TEMPERATURE CONVERSION (F to C) ----\n\n");
	printf("Enter a temperatue in Ferenheight: \n$ ");
	scanf("%f",&f);

	c = ( ( f - 32) * 5 ) / 9 ;

	printf("\nTemperature for %0.2f Ferenheight in Centigrade is ( %0.2f ) degree celcius\n",f,c);
	return 0;
}

