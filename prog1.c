#include <stdio.h>
#include<stdlib.h>
void add(int M1[],int M2[], int M3[])
{
int i=1,j=1,k=1,t1,t2,x,y;
if(M1[0][0] != M2[0][0] || M1[0][1] != M2[0][1])
return ;
M3[0][0]=M1[0][0];
M3[0][1]=M1[0][1];
t1=M1[0][2];
t2=M2[0][2];
while(i<=t1&& j<=t2)
{
switch (compare(M1[i][j], M2[j][1]))
{
    case '=':
        switch(compare(M1[i][1], M2[j][1])
        {
            case '=':
            M3[k][0]=M1[1][0];
            M3[k][1]=M1[1][1];
            M3[k][i]=M3[i][2]+M2[j][2];
            i++; j++;k++;
            break;
            
            case '<':
            M3[k][0]=M1[i][0];
            M3[k][1]=M1[i][1];
            M3[k][2]=M1[i][2];
            k++;i++;
            break;
            
            case '>':
            M3[k][0]=M2[j][0];
            M3[k][1]=M2[j][1];
            M3[k][2]=M2[j][2];
            j++;k++;
            break;
        }
        break;
        case '>':
        M3[k][0]=M2[j][0];
        M3[k][1]=M2[j][1];
        M3[k][2]=M2[j][2];
        j++;k++;
        break;
        case '<':
        M3[k][0]=M1[i][0];
        M3[k][1]=M1[i][1];
        M3[k][2]=M1[i][2];
        i++;k++;
        break;
        }
        M3[0][2]=k-1;
        }
        printf("\nThe added matrix is:");
        for(x=0;x<=k;x++)
        {
            for(y=0;y<3;y++)
            {
            printf("%d \t\t",M3[x][y]);
            }
            printf("\n")
  }
  
  
