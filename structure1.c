#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
	
	struct student students[3];

	for(int i=0;i<3;i++)
	{
		printf("Enter  student-%d details -> ",i+1);
		scanf("%s %d %f" ,students[i].name,&students[i].rollno,&students[i].marks);
	}

	printf("\n\n");

	for(int i=0;i<3;i++)
	{
		printf("student-%d details ->  ",i+1);
		printf("%s %d %f\n",students[i].name,students[i].rollno,students[i].marks);
	}
	printf("\n\n");

	for(int i=0;i<3;i++)
	{
		printf("student-%d address -> %p \n",i+1,&students[i]);
	
	}
	
	printf("\n\n");
	for(int i=0;i<3;i++)
        {
                printf("student-%d size -> %lu \n",i+1,sizeof(students[i]));
        }



}
