// Q4. heck if the given number is even or odd.
#include <stdio.h>

void main() {
    int number;

    // Input: Accept a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using the modulus operator
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    
}
