// Q6Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

#include <stdio.h>

void main() {
    char gender;
    int age;

   
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter age: ");
    scanf("%d", &age);

   
    if (gender == 'M' || gender == 'm') {
        if (age >= 21) {
            printf("Eligible to marry.\n");
        } else {
            printf("Not eligible to marry.\n");
        }
    } else if (gender == 'F' || gender == 'f') {
        if (age >= 18) {
            printf("Eligible to marry.\n");
        } else {
            printf("Not eligible to marry.\n");
        }
    } else {
        printf("Invalid gender input. Please enter M or F.\n");
    }

}
