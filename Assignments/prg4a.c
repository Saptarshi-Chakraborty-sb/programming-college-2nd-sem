//           Convert Centigrade to Ferenheight
//              Equation: (c/5) = (F - 32)/9

#include <stdio.h>
int main() {
	float c, f;
	printf("\t\t---- TEMPERATURE CONVERSION (C to F) ----\n\n");
	printf("Enter a temperatue in Centigrade: \n$ ");
	scanf("%f",&c);

	f = ( (9 * c) / 5 ) + 32 ;

	printf("\nTemperature for %0.2f Centigrade in Ferenheight is ( %0.2f ) degree ferenheight\n",c,f);
	return 0;
}

