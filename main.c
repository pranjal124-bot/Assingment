#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int choice, number;

    do {
        printf("\n===== MAIN MENU =====\n");
        printf("1. Test Armstrong Number\n");
        printf("2. Test Adams Number\n");
        printf("3. Test Prime Palindrome Number\n");
        printf("4. Find Max Index in Array\n");
        printf("5. Find Min Index in Array\n");
        printf("6. Compute Array Average\n");
        printf("7. Display Array\n");
        printf("8. Reverse Array\n");
        printf("9. Sort Array\n");
        printf("10. Linear Search in Array\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 11) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // Number-based operations
        if (choice >= 1 && choice <= 3) {
            printf("Enter a number: ");
            scanf("%d", &number);

            switch (choice) {
                case 1:
                    if (isArmstrong(number))
                        printf("%d is an Armstrong number.\n", number);
                    else
                        printf("%d is NOT an Armstrong number.\n", number);
                    break;
                case 2:
                    if (isAdams(number))
                        printf("%d is an Adams number.\n", number);
                    else
                        printf("%d is NOT an Adams number.\n", number);
                    break;
                case 3:
                    if (isPrimePalindrome(number))
                        printf("%d is a Prime Palindrome number.\n", number);
                    else
                        printf("%d is NOT a Prime Palindrome number.\n", number);
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        }

        // Array-based operations
        if (choice >= 4 && choice <= 10) {
            int size;
            printf("Enter array size: ");
            scanf("%d", &size);

            int arr[size];
            printf("Enter array elements: ");
            for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
            }

            int maxIdx, minIdx, value, searchResult;
            float avg;

            switch (choice) {
                case 4:
                    maxIdx = findMaxIndex(arr, size);
                    printf("Index of maximum value: %d\n", maxIdx);
                    break;
                case 5:
                    minIdx = findMinIndex(arr, size);
                    printf("Index of minimum value: %d\n", minIdx);
                    break;
                case 6:
                    avg = findAverage(arr, size);
                    printf("Average of the array: %.2f\n", avg);
                    break;
                case 7:
                    printf("Array elements: ");
                    displayArray(arr, size);
                    break;
                case 8:
                    reverseArray(arr, size);
                    printf("Reversed array: ");
                    displayArray(arr, size);
                    break;
                case 9:
                    sortArray(arr, size);
                    break;
                case 10:
                    printf("Enter number to search: ");
                    scanf("%d", &value);
                    searchResult = linearSearch(arr, size, value);
                    if (searchResult != -1)
                        printf("Number found at index %d\n", searchResult);
                    else
                        printf("Number not found in the array.\n");
                    break;
                default:
                    printf("Enter a valid choice.\n");
            }
        } else if (choice < 1 || choice > 11) {
            printf("Enter a valid choice.\n");
        }

    } while (choice != 11);

    return 0;
}
