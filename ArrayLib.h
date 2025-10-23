
int findMaxIndex(int arr[], int n) {
    int maxPos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxPos])
            maxPos = i;
    }
    return maxPos ;
}

int findMinIndex(int arr[], int n) {
    int minPos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minPos])
            minPos = i;
    }
    return minPos ;
}


float findAverage (int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return (float) total / n ;
}


void displayArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n") ;
}


void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
		
    }
}


void sortArray (int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
				
            }
        }
		
    }

    printf ("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;  
}
