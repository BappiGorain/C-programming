#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements you  want to enter : ");
	scanf("%d",&n);
	int *arr;
	arr  = (int*)malloc(n*sizeof(int));
	
	printf("Enter %d number : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	int max =  *arr;
	for(int i=1;i<n;i++)
	{
		if(*(arr+i) > max) max = *(arr+i);
	}
	
	printf("Maximum number is :\n");
	
	printf("%d",(max));
	printf("\n");
	free(arr);
}
