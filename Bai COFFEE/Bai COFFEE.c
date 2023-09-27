#include <stdio.h>
#define COFFEE_PRICE 2.5
#define TEA_PRICE 2.0
#define SMOOTHIE_PRICE 3.0

int main() {
    int numCoffees = 0, numTeas = 0, numSmoothies = 0;
    float totalCost;
    char choice;
    printf("Welcome to Coffee Shop!\n");

    do {
        printf("\n---Menu---\n");
        printf("1. Coffee ($%.2f)\n", COFFEE_PRICE);
        printf("2. Tea ($%.2f)\n, TEA_PRICE");
        printf("3. Smoothie ($%.2f)\n", SMOOTHIE_PRICE);
        printf("4. Quit\n");

        printf("Enter your choice (1-4):");
        scanf("%c", &choice);

        switch (choice) {
            case '1':
                numCoffees++;
                break;
            case '2':
                numTeas++;
                break;
            case '3':
                numSmoothies++;
                break;
            case '4':
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '4');
    totalCost=(numCoffees * COFFEE_PRICE) + (numTeas * TEA_PRICE) +(numSmoothies * SMOOTHIE_PRICE);
    printf("\nOrder Details:\n");
    printf("Coffees: %d\n", numCoffees);
    printf("Teas: %d\n", numTeas);
    printf("Smoothies: %d\n", numSmoothies);
    printf("Total Cost: $%.2f\n", totalCost);

    printf("\nThank you for your order! Enjoy your drinks!\n");

    return 0;
}



//
// Created by Administrator on 9/27/2023.
//
