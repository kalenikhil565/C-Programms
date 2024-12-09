//Q2. Finding area and perimeter of rectangle or circle.

#include <stdio.h>
#include <math.h>  

void main() {
    int choice;
    float length, width, radius;
    float area, perimeter, circumference;

    // Display menu to the user
    printf("Choose the shape to calculate:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        // Rectangle
        printf("Enter the length and width of the rectangle:\n");
        scanf("%f %f", &length, &width);

        area = length * width;
        perimeter = 2 * (length + width);

        printf("Area of the rectangle: %.2f\n", area);
        printf("Perimeter of the rectangle: %.2f\n", perimeter);
    } else if (choice == 2) {
        // Circle
        printf("Enter the radius of the circle:\n");
        scanf("%f", &radius);

        area = M_PI * radius * radius;           
        circumference = 2 * M_PI * radius;

        printf("Area of the circle: %.2f\n", area);
        printf("Circumference of the circle: %.2f\n", circumference);
    } else {
        printf("Invalid choice. Please enter 1 for Rectangle or 2 for Circle.\n");
    }

    
}
