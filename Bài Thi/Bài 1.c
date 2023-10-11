#include <stdio.h>

int Cong(int a, int b) {
    return a + b;
}

int Tru(int a, int b) {
    return a - b;
}

int Nhan(int a, int b) {
    return a * b;
}

float Chia(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

void Menu() {
    printf("Calculation:\n");
    printf("============\n");
    printf("1. Input Number\n");
    printf("2. Calculate Sum\n");
    printf("3. Calculate Subtraction\n");
    printf("4. Calculate Multiplication\n");
    printf("5. Calculate Division\n");
    printf("6. Exit\n");
}

int main() {
    int choice = 0;
    int num1 = 0;
    int num2 = 0;

    while (choice != 6) {
        Menu();
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        } else if (choice == 2) {
            int result = Cong(num1, num2);
            printf("Sum: %d\n", result);
        } else if (choice == 3) {
            int result = Tru(num1, num2);
            printf("Subtraction: %d\n", result);
        } else if (choice == 4) {
            int result = Nhan(num1, num2);
            printf("Multiplication: %d\n", result);
        } else if (choice == 5) {
            float result = Chia(num1, num2);
            printf("Division: %.2f\n", result);
        } else if (choice == 6) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Please enter a number from 1 to 6.\n");
        }
    }

    return 0;
}