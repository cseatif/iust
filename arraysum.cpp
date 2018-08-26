#include<stdio.h>
int main()
{
	int A[5] , i , sum=0;
	printf("enter the 5 no's:");

	for(i=0;i<5;i++)
	
		scanf("%d" , &A[i]);
			for(i=1;i<5;i++)
		sum=sum+A[i];
	

	printf(" sum is %d" , sum);
	printf("\n");
	
}
