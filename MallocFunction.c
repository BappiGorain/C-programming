#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter how many elements you want to enter : ");
	scanf("%d",&n);
	int *p;
	p = (int*)malloc(n * sizeof(int));

	printf("Enter %d elements : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}		
	for(int i=0;i<n;i++)
	{
		printf("%d \n",*(p+i));
	}
}
