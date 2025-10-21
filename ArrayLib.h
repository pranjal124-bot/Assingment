//Function for finding max value containg index
int findMaxIndex(int arr[], int size){
    int maxindex = 0;
    int i=0;
	while(i<size){
		if(arr[i] > arr[maxindex]){
			maxindex = i;
		}
		i++;
	}
    return maxindex;
}
//Function for finding min value containing index
int findMinIndex(int arr[], int size){
    int minindex = 0;
    int i=0;
	while(i<size){
		if(arr[i] < arr[minindex]){
			minindex = i;
		}
		i++;
	}
    return minindex;
}
//Function for finding the average of the array
float findAverage(int arr[], int size){
    int sum = 0;
    int i=0;
    while(i<size){
    	sum += arr[i];
    	i++;
	}
    return (float)sum/size;
}
//Display the array
int displayArray(int arr[], int size){
	int i=0;
	while(i<size){
		printf("%d ",arr[i]);
		i++;
	}
}
//Reverse the array
int reverseArray(int arr[], int size) {
	int i=0,temp;
	while(i<size/2){
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
		i++;
	}
	return temp;
}
//Sorting of an array
int sortArray(int arr[], int size){
	int i=0,j=0,x;
	while(i<size-1){
		while(j<size-i-1){
			if(arr[j]>arr[j+1]){
				x=arr[j];
				arr[j]=arr[j+1];
            	arr[j+1]=x;
			}
			j++;
		}
		i++;
	}
	int t=0;
	while(t<size){
		printf("%d ",arr[t]);
		t++;
	}
}
//Linear searching in the array
int linearSearch(int arr[], int size, int value){
	int i=0;
	while(i<size){
		if(arr[i]==value){
			return i;
		}
		i++;
	}
    return -1;	//Index start from 0 in array
}