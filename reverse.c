#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of character you  want to enter : ");
	scanf("%d",&n);
	char *str;
	str  = (char*)malloc(n*sizeof(char));
	
	printf("Enter %d character : ",n);
	scanf("%s",str);

	for(int i=0;i<n/2;i++)
	{
		char ch = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = ch;
	}
	
	printf("Your new string:\n");
	
	for(int i=0;i<n;i++)
	{
		printf("%c",(str[i]));
	}
	printf("\n");
	free(str);
}
