#include <stdio.h>
#include "arraylib.h"

// Main menu-driven program
int main(){
    int choice,size;
    do {
        printf("\n******* MENU *******\n");
        printf("1. Finding Max Index\n");
        printf("2. Finding Min Index\n");
        printf("3. Finding The Average Of The Array\n");
        printf("4. Display The Array\n");
        printf("5. Reverse The Array\n");
        printf("6. Sort The Array\n");
        printf("7. Linear Searching In The Array\n");
        printf("8. Exit The Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 8) {
            printf("Exiting Program. Goodbye!\n");
            break;
        }
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        
        int arr[size];
        printf("Enter elements:");
        int i=0;
		while(i<size){
        	scanf("%d", &arr[i]);
        	i++;
		}
		int maxindex,minindex,value,search;
		float average;
        switch(choice){
            case 1: 
                maxindex = findMaxIndex(arr, size);
                printf("The Max Value Containing Index is %d\n", maxindex);
                break;
            case 2:
                minindex = findMinIndex(arr, size);
                printf("The Min Value Containing Index is %d\n", minindex);
                break;
            case 3:
                average = findAverage(arr, size);
                printf("The Average of the Array is %.2f\n", average);
                break;
            case 4:
                printf("The Array is: ");
                displayArray(arr, size);
                break;
            case 5:
                reverseArray(arr, size);
                printf("The Reversed Array is: ");
                displayArray(arr, size);
                break;
            case 6:
                sortArray(arr, size);
                break;
            case 7:
                printf("Enter the number you want to search in the Array: ");
                scanf("%d", &value);
                search = linearSearch(arr, size, value);
                if (search != -1)
                    printf("The number was found at index %d\n", search);
                else
                    printf("The number was not found in the array.\n");
                break;
            default:
                printf("Enter a Valid Choice\n");
        }

    } while (choice != 8);

    return 0;
}
