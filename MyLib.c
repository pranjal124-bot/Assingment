#include <stdio.h>
#include "mylib.h"

int main() {
    int option;
    int numberToTest;

    while (1) {
        printf("\n--- Number Checker Menu ---\n");
        printf("1. Check for Armstrong Number\n");
        printf("2. Check for Adams Number\n");
        printf("3. Check for Prime Palindrome\n");
        printf("4. Quit Program\n");
        printf("Your selection: ");

        scanf("%d", &option);

        if (option == 4) {
            printf("All done. Goodbye!\n");
            break;
        }

        if (option < 1 || option > 3) {
            printf("Invalid choice! Please try again.\n");
            continue; 
        }

        printf("Enter a number to test: ");
        scanf("%d", &numberToTest);

        switch (option) {
            case 1:
                if (isArmstrong(numberToTest)) {
                    printf("%d is an Armstrong number.\n", numberToTest);
                } else {
                    printf("%d is NOT an Armstrong number.\n", numberToTest);
                }
                break;
            case 2:
                if (isAdams(numberToTest)) {
                    printf("%d is an Adams number.\n", numberToTest);
                } else {
                    printf("%d is NOT an Adams number.\n", numberToTest);
                }
                break;
            case 3:
                if (isPrimePalindrome(numberToTest)) {
                    printf("%d is a Prime Palindrome number.\n", numberToTest);
                } else {
                    printf("%d is NOT a Prime Palindrome number.\n", numberToTest);
                }
                break;
        }
    }

    return 0;
}