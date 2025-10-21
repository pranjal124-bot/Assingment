// Function to check if number is Armstrong
int isArmstrong(int num){
	int cnt=0,rem,dig,orgnum,summ=0,x;
	orgnum=num;
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
		summ+=result;
		num/=10;
	}
	if(orgnum==summ){
		x=1;
	}else{
		x=0;
	}
	return x;
}
// Function to check if number is Adams Number
int isAdams(int num){
	int orgno,orgsw,rev=0,rem,reve=0,rema,y;
	orgno=num;
	num=num*num;
	int orgsq=num;
	while(orgno>0){
		rem=orgno%10;
		rev=rev*10+rem;
		orgno/=10;
	}
	int dupsq=rev*rev;
	while(dupsq>0){
		rema=dupsq%10;
		reve=reve*10+rema;
		dupsq/=10;
	}
	if(reve==orgsq){
		y=1;
	}else{
		y=0;
	}
	return y;
}
// Function to check if number is prime and palindrome
int isPrimePalindrome(int num){
	int rem,orgno,rev=0,z,c=0;
	orgno=num;
	int temp=num;
	int i=1;
	while(i<=temp){
		if(temp%i==0){
			c+=1;
		}
		i++;
	}
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==orgno && c==2){
		z=1;
	}else{
		z=0;
	}
	return z;
}