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
	struct student stu1 = {"Bappi",29,9.2};
	
	struct student stu2;
	strcpy(stu2.name, "Abhigyan");
	stu2.rollno = 39;
	stu2.marks = 9.8;

	struct student stu3;
	printf("Enter third student details ");
	scanf("%s %d %f" ,&stu3.name,&stu3.rollno,&stu3.marks);
	
	printf("%s %d %f\n",stu1.name,stu1.rollno,stu1.marks);
	
	printf("%s %d %f\n",stu2.name,stu2.rollno,stu2.marks);

	printf("%s %d %f\n",stu3.name,stu3.rollno,stu3.marks);

	student students[3];
}
