#include <stdio.h>
#include "mylib.h"

int main() {
    int choice;
    int testNumber;

    while (1) {
        printf("\n=== Number Testing Menu ===\n");
        printf("1. Test for Armstrong Number\n");
        printf("2. Test for Adams Number\n");
        printf("3. Test for Prime Palindrome\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        if (choice == 4) {
            printf("Program terminated. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 3) {
            printf("Invalid option! Try again.\n");
            continue; 
        }

        printf("Enter the number to check: ");
        scanf("%d", &testNumber);

        switch (choice) {
            case 1:
                if (isArmstrong(testNumber))
                    printf("%d is an Armstrong number.\n", testNumber);
                else
                    printf("%d is NOT an Armstrong number.\n", testNumber);
                break;
            case 2:
                if (isAdams(testNumber))
                    printf("%d is an Adams number.\n", testNumber);
                else
                    printf("%d is NOT an Adams number.\n", testNumber);
                break;
            case 3:
                if (isPrimePalindrome(testNumber))
                    printf("%d is a Prime Palindrome number.\n", testNumber);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", testNumber);
                break;
        }
    }

    return 0;
}
