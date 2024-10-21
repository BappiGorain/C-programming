#include<stdio.h>
#include<stdlib.h>

int main()
{
	int yes = 1;
	while(yes == 1) {
	int n;
	printf("Enter number of character you  want to enter : ");
	scanf("%d",&n);
	char *str;
	str  = (char*)malloc(n*sizeof(char));
	
	printf("Enter %d character : ",n);
	scanf("%s",str);

	for(int i=0;i<n;i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			str[i] = (char)(str[i] - 32);
		}
	}
	
	printf("Your new string:\n");
	
	for(int i=0;i<n;i++)
	{
		printf("%c",(str[i]));
	}
	printf("\n");
	printf("Do you want to insert another string ");
	printf("\nIf yes press 1 : ");
	printf("\nIf No press any other Integer : ");
	scanf("%d",&yes);
	free(str);
	}
	
}
