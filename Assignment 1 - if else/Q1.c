//Q1. Finding F from C (temp)

#include <stdio.h>
void main() {

	float celsius, fahrenheit;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);


}
