/* Q5. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 
30% respectively.*/

#include <stdio.h>

void main() {
    float basic, da, ta, hra, totalSalary;

    // Input: Accept the basic salary from the user
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    // Calculate allowances based on the basic salary
    if (basic <= 5000) {
        // For basic salary <= 5000
        da = basic * 0.10;  // DA = 10% of basic salary
        ta = basic * 0.20;  // TA = 20% of basic salary
        hra = basic * 0.25; // HRA = 25% of basic salary
    } else {
        // For basic salary > 5000
        da = basic * 0.15;  // DA = 15% of basic salary
        ta = basic * 0.25;  // TA = 25% of basic salary
        hra = basic * 0.30; // HRA = 30% of basic salary
    }

    // Calculate total salary
    totalSalary = basic + da + ta + hra;

    // Output: Display the calculated allowances and total salary
    printf("Basic Salary: %.2f\n", basic);
    printf("DA (10%% or 15%%): %.2f\n", da);
    printf("TA (20%% or 25%%): %.2f\n", ta);
    printf("HRA (25%% or 30%%): %.2f\n", hra);
    printf("Total Salary: %.2f\n", totalSalary);

    
}
