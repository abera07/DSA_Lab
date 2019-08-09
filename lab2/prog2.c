#include<stdio.h>
#include<stdlib.h>
int main()
{
int*p,n,i,*max,*min;
printf("\nEnter the number of integers to be entered:");
scanf("%d",&n);
p=(int*) malloc(n*sizeof(int));
if (p==NULL)
{
printf("\n Out of memory!!");
exit(1);
}
printf("\nEnter integers:\n");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
max=min=p;
for(i=0;i<n;i++)
{
if(*(p+i)>*max)
{
max=p+i;
}
if(*(p+i)<*min)
{
min=p+i;
}
}
printf("\nThe largest integer found is:%d",*max);
printf("\nThe smallest integer found is:%d \n",*min);
return 0;
}
