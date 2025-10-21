#include<stdio.h>
#include"mylib.h"
#include"arraylib.h"
// Main menu-driven program
int main(){
    int choice, num;
    do{
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Finding Max Index\n");
        printf("5. Finding Min Index\n");
        printf("6. Finding The Average Of The Array\n");
        printf("7. Display The Array\n");
        printf("8. Reverse The Array\n");
        printf("9. Sort The Array\n");
        printf("10. Linear Searching In The Array\n");
        printf("11. Exit The Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 11){
            printf("Exiting Program. Goodbye!\n");
            break;
        }
        if(choice>=1 && choice<=3){
        printf("Enter a number: ");
        scanf("%d", &num);
        switch(choice){
            case 1:
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is NOT an Armstrong number.\n", num);
                break;
            case 2:
                if (isAdams(num))
                    printf("%d is an Adams number.\n", num);
                else
                    printf("%d is NOT an Adams number.\n", num);
                break;
            case 3:
                if (isPrimePalindrome(num))
                    printf("%d is a Prime Palindrome number.\n", num);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                break;
            default:
                printf("Invalid choice!\n");
    	}
		}
		if(choice>=4 && choice<=10){
		int size;
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
            case 4: 
                maxindex = findMaxIndex(arr, size);
                printf("The Max Value Containing Index is %d\n", maxindex);
                break;
            case 5:
                minindex = findMinIndex(arr, size);
                printf("The Min Value Containing Index is %d\n", minindex);
                break;
            case 6:
                average = findAverage(arr, size);
                printf("The Average of the Array is %.2f\n", average);
                break;
            case 7:
                printf("The Array is: ");
                displayArray(arr, size);
                break;
            case 8:
                reverseArray(arr, size);
                printf("The Reversed Array is: ");
                displayArray(arr, size);
                break;
            case 9:
                sortArray(arr, size);
                break;
            case 10:
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
			}else{
				printf("Enter a valid Choice\n");
			}
        	
		}while(choice!=11);
		return 0;
}