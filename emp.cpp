#include<stdio.h>

struct employee{
	char employee_name[100];
	int  employee_id;
	float salary;
	
};

int main(){
	struct employee write_arr[3],read_arr[3],reading;
	FILE *ptr;
	float temp;
	
	for (int i=0;i<3;i++){
	printf("Enter employee name %d == ",i+1);
	scanf("%s",&write_arr[i].employee_name);
	printf("\n");
	printf("Enter employee id %d==",i+1);
	scanf("%d",&write_arr[i].employee_id);
	printf("\n");
	printf("Enter salary of %d::",i+1);
	scanf("%f",&write_arr[i].salary);
	printf("\n");	
	}
	int k=0;	
	ptr=fopen("employee1.dat","w+b");
	fwrite(&write_arr,sizeof(write_arr),1,ptr);
	while(fread(&reading,sizeof(read_arr),1,ptr)!=0){
		fread(&reading,sizeof(read_arr),1,ptr);
		read_arr[k]=reading;
		k++;
		
	}
	
	for (int i=0;i<3;i++){
		for (int j=i+1;j<3;j++){
			if (read_arr[i].salary > read_arr[j].salary){
				temp=read_arr[i].salary;
				read_arr[i].salary=read_arr[j].salary;
				read_arr[j].salary=temp;
			}
		}
	}
	
	printf("\n");
	printf("Detail of employee on the basis of salary in ascending order is ::");
	printf("\n");
	
		for (int i=0;i<3;i++){
			printf("%s",read_arr[i].employee_name);
			printf("\n");
			printf("%d",read_arr[i].employee_id);
			printf("\n");
			printf("%s",read_arr[i].salary);
			printf("\n");
	
}
	fclose(ptr);
	return 0;
		
		
}
