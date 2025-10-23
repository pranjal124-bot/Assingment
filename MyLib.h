// Function to check if number is Armstrong
int isArmstrong(int num){
    int cnt=0, rem, dig, original, sum=0;
    original = num;
    int temp=num;
    while(temp>0){
        cnt=cnt+1;
        temp/=10;
    }
    temp=num;
    while(num>0){
        dig=num%10;
        int result=1;
        int k=1;
        while(k<=cnt){
            result=result*dig;
            k++;
        }
        sum+=result;
        num/=10;
    }
    if(original==sum){
        return 1;
    } else {
        return 0;
    }
}

// Function to check if number is Adams Number
int isAdams(int num){
    int original, rev=0, rem, reversedSquare=0;
    original = num;
    num=num*num;
    int orgsq=num;
    int orgnum = original;
    while(orgnum>0){
        rem=orgnum%10;
        rev=rev*10+rem;
        orgnum/=10;
    }
    int dupsq=rev*rev;
    while(dupsq>0){
        rem=dupsq%10;
        reversedSquare=reversedSquare*10+rem;
        dupsq/=10;
    }
    if(reversedSquare==orgsq){
        return 1;
    } else {
        return 0;
    }
}

// Function to check if number is prime and palindrome
int isPrimePalindrome(int num){
    int rem, original=num, rev=0, count=0;
    int temp=num;
    int i=1;
    while(i<=temp){
        if(temp%i==0){
            count+=1;
        }
        i++;
    }
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==original && count==2){
        return 1;
    } else {
        return 0;
    }
}
