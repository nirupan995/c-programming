#include<stdio.h>
#include<stdlib.h>
void odd_disp(int *,int*,int);
int main(){
	int *numbers;
	int *odd;
	char p[10]="yes";
	char ask_user[10];
	int n=1;
	int y=0;
	numbers=(int*) malloc(n*sizeof(int));
	odd=(int*) malloc(n*sizeof(int));

	while (p[0]!='n' && p[1]!='o'){
		printf("Enter an number:");
		scanf("%d",&numbers[y]);
		n++;
		printf("\n");
		printf("Continue(yes/no)::  ");
		scanf("%s",&ask_user);
		p[0]=ask_user[0];
		p[1]=ask_user[1];
		y++;
		if (ask_user[0]!='n' && ask_user[1]!='o'){
			numbers=realloc(numbers,n);
			
		}
	}
	odd_disp(numbers,odd,n);
	int m=0;
	printf("The odd numbers are::");
	printf("\n");
	while(*(odd+m)!='\0'){
		printf("%d",*(odd+m));
		printf("\n");
		m++;
	}
}

void odd_disp(int *num_1,int *odds , int p){
	int i=0;
	for( i=0;i<p;i++){
		if (*(num_1+i)%2!=0){
			*(odds+i)= *(num_1+i);
			
		}
	}
}
