#include<stdio.h>
#include<string.h>
struct student 
{
char name[30];
int roll;
char branch[20];
float cgpa;
};
int main()
{
struct student s;
printf("Enter the details of the student:\n Name:");
scanf("%s",&s.name);
printf("\nRoll number:");
scanf("%d",&s.roll);
printf("\nBranch:");
scanf("%s",&s.branch);
printf("\n CGPA:");
scanf("%f",&s.cgpa);
printf("\n\n\nThe student details are as follows:\n Name:%s \n Roll number:%d \n Branch:%s \n CGPA:%f",s.name,s.roll,s.branch,s.cgpa);
return 0;
}

