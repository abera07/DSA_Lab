#include <stdio.h>
struct student
{
char name[30];
int roll;
char branch[10];
float cgpa;
};
int main()
{
struct student s;
struct student *st;
st=&s;
printf("\nEnter the details of the student:\n Name:");
scanf("%s",&st->name);
printf("\nRoll number:");
scanf("%d",&st->roll);
printf("\nBranch:");
scanf("%s",&st->branch);
printf("\nCGPA:");
scanf("%f",&st->cgpa);
printf("\n\n\n\n\nThe student details are as follows:\n\n\nName:%s \n Roll number:%d \n Branch:%s \n CGPA:%f",st->name,st->roll,
st->branch,st->cgpa);
return 0;
}

