#include<stdio.h>

int recur(int n);

int main(){
	int number,sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	
	sum=sum+recur(number);
	
	printf("Sum=%d",sum);
	
	return 0;
}

int recur(int n){
	int g=0;
	int k=1;
	int sum=0;
	if (n==0){
		return 0;
	}else{
		g=n+1;
		for (int i=g;i>=1;i--){
		
			k=k*(-1);
			
		}
		sum=sum+(k*n*n);
}
		return (sum+recur(n-1));
		
	
}
