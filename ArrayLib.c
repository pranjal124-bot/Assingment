#include <stdio.h>
#include "arraylib.h"

int main() {
    int option, n;

    do {
        printf("\n====== ARRAY OPERATIONS MENU ======\n");
        printf("1. Find Index of Maximum Element\n");
        printf("2. Find Index of Minimum Element\n");
        printf("3. Calculate Average of Elements\n");
        printf("4. Display Array Elements\n");
        printf("5. Reverse Array\n");
        printf("6. Sort Array\n");
        printf("7. Linear Search in Array\n");
        printf("8. Exit\n");
        printf("Select an option (1-8): ");
        scanf("%d", &option);

        if (option == 8) {
            printf("Program terminated. Have a great day!\n");
            break;
        }

        printf("Enter number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int maxIdx, minIdx, pos, key;
        float avg;

        switch (option) {
            case 1:
                maxIdx = findMaxIndex(arr, n);
                printf("Index of maximum value: %d\n", maxIdx);
                break;
            case 2:
                minIdx = findMinIndex(arr, n);
                printf("Index of minimum value: %d\n", minIdx);
                break;
            case 3:
                avg = findAverage(arr, n);
                printf("Average of array elements: %.2f\n", avg);
                break;
            case 4:
                printf("Array contents: ");
                displayArray(arr, n);
                break;
            case 5:
                reverseArray(arr, n);
                printf("Array after reversing: ");
                displayArray(arr, n);
                break;
            case 6:
                sortArray(arr, n);
                printf("Array sorted successfully!\n");
                displayArray(arr, n);
                break;
            case 7:
                printf("Enter value to search: ");
                scanf("%d", &key);
                pos = linearSearch(arr, n, key);
                if (pos != -1)
                    printf("Element found at index %d\n", pos);
                else
                    printf("Element not found in array.\n");
                break;
            default:
                printf("Invalid input! Please try again.\n");
        }

    } while (option != 8);

    return 0;
}
