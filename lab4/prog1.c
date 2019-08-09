#include<stdio.h>
#include <stdlib.h>
int *add(int *A,int m,int *B, int n)
{
int *C;
int x,y;
if(m>n)
{
C=(int*)malloc((m+1)*sizeof(int));
for(x=0;x<=m;x++)
{
C[x]=A[x];
}
for(x=0;x<=m;x++)
{
C[x]=C[x]+B[x];
}
}
else
{
for(x=0;x<=n;x++)
{
C[x]=B[x];
}
C=(int*)malloc((n+1)*sizeof(int));
for(x=0;x<=n;x++)
{
C[x]=C[x]+A[x];
}
}
return C;
}
int main()
{
int *A,m,*B,n,co,e,i,j,term,t,*C;
printf("\nEnter the highest exponent of polynomial A:");
scanf("%d",&m);
A=(int*)malloc((m+1)*sizeof(int));
for(i=0;i<=m;i++)
{
A[i]=0;
}
printf("\nEnter the number of non-zero terms:");
scanf("%d",&term);
for(i=0;i<term;i++)
{
printf("\nEnter the coefficient and exponents of %d term:",i+1);
scanf("%d %d",&co,&e);
A[e]=co;
}
printf("\nEnter the highest exponent of polynomial B:");
scanf("%d",&n);
B=(int*) malloc((n+1)*sizeof(int));
for(i=0;i<=n;i++)
{
B[i]=0;
}
printf("\nEnter the number of non-zero terms:");
scanf("%d",&t);
for(i=0;i<t;i++)
{
printf("\nEnter the coefficient and exponents of %d term:",i+1);
scanf("%d %d",&co,&e);
B[e]=co;
}
C=add(A,m,B,n);
if(m>n)
{
for(i=0;i<=m;i++)
{
printf("%d x^%d +",C[i],i);
}
}
else
{
for(j=0;j<=n;j++)
{
printf("%d x^%d+",C[j],j);
}
} 
return 0;}

