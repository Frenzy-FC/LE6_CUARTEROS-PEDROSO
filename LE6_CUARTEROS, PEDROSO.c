#include <stdio.h>
#include <math.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main() {
    int choice = 0;
    float num1 = 0.0f;
    float num2 = 0.0f;
    int intResult = 0;
    float floatResult = 0.0f;

    do {
        printf("\nMultiple Functions to perform Arithmetic Operation\n");
        printf("\nEnter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\nChoose operation: ");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit Program");
        printf("\nEnter Choice [1-5]: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            intResult = add((int)num1, (int)num2);
            printf("\n%d + %d = %d\n", (int)num1, (int)num2, intResult);
        } 
        else if (choice == 2) {
            intResult = subtract((int)num1, (int)num2);
            printf("\n%d - %d = %d\n", (int)num1, (int)num2, intResult);
        } 
        else if (choice == 3) {
            intResult = multiply((int)num1, (int)num2);
            printf("\n%d * %d = %d\n", (int)num1, (int)num2, intResult);
        } 
        else if (choice == 4) {
            if (num2 != 0) {
                floatResult = divide(num1, num2);
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, floatResult);
            } else {
                printf("\n^-^ Cannot divide Zero\n");
            }
        } 
        else if (choice == 5) {
            printf("\nExiting program...\n");
        } 
        else {
            printf("Invalid choice. Please select between 1 and 5.\n");
        }

    } while(choice != 5);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
    