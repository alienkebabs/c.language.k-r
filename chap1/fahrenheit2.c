#include <stdio.h>

/* print Fahrenheit-Celsius table */
double fahr2cel(double fahr);

int main() 
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, fahr2cel(fahr));
}

double fahr2cel(double fahr){
	double cel = ((5.0 / 9.0) * (fahr - 32));
	return cel;
}
