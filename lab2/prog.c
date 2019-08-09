#include<stdio.h>
int main()
{
int n, arr[n],j,*max,*min,i;

printf("\nEnter the number of elements of the array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
{
printf("\nEnter the %d element:",i);
scanf("%d",&arr[i]);
}

max=min=arr;

for(j=0;j<n;j++)
{
if (*(arr+j)>*max)
{
max=(arr+j);
}
if(*(arr+j)<*min)
{
min=(arr+j);
}
}
printf("\n");
printf("The largest element of the array is:%d",*max);
printf("\n");
printf("The smallest of the array is:%d",*min);
return 0;
}

