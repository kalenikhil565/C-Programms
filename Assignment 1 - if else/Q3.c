//Q3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number
#include <stdio.h>

void main() {
	int num, digit1, digit2, digit3, sum, reversedNum;


	printf("Enter a three-digit number: ");
	scanf("%d", &num);


	if (num >= 100 && num <= 999) {

		digit1 = num / 100;
		digit2 = (num / 10) % 10;
		digit3 = num % 10;


		sum = digit1 + digit2 + digit3;


		reversedNum = digit3 * 100 + digit2 * 10 + digit1;


		printf("Sum of the digits: %d\n", sum);
		printf("Reversed number: %d\n", reversedNum);
	} else {

		printf("Error: Please enter a three-digit number.\n");
	}


}


