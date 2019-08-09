#include<stdio.h>
int main()
{
//Merging of two arrays
int n,m,p,i,j,k;

printf("\nEnter the length of the 2 arrays:\n);
scanf("%d %d", &n, &m);
p=m+n;
int a[n],b[m],c[p];

printf("Enter the elements in first array:");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the elements of the second array:");

for(j=0;j<n;j++)
{
scanf("%d",&b[j])
}


for(j=0;j<p;j++)
{

