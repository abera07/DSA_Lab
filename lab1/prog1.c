#include<stdio.h>
int main()
{
 int n;
int a[n],i,j,max,min;


printf("Enter any number of choice:\n");
scanf("%d",&n);


printf("\nInput the elements of the array:\n");
 
for(i=0; i<n; i++)
{
printf("\n Please enter the %d element of the array:\n",i);
scanf("%d",&a[i]);
}
max=min=a[0];

for (j=1;j<n;j++);
{
if(min>a[j])
min=a[j];
if(max<a[j])
max=a[j];
}
printf("The largest and the smallest numbers are %d %d",max,min);
return 0;
}
