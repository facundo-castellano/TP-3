/* Tabla Celsius - Fahrenheit aplicando const y getFahr(celsius).
* Facundo Castellano
* 26/04/2015
*/

#include <stdio.h>	

float getFahr(int celsius){

	float fahr;
	fahr = celsius * (9.0/5.0) + 32.0;
	return fahr;
}

int main(void)
{
	const int UPPER = 300;
	const int LOWER = 0;
	const int STEP = 20;

	int celsius;	

	
	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
		printf("%3d\t %6.1f\n", celsius, getFahr(celsius));
	
	
}
