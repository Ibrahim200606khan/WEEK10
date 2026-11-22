#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3];
int n,i,j;
printf("ENTER MATRIX A:\n");
// INPUT A //
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}
}
printf("ENTER MATRIX B:\n");
// INPUT B //
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{scanf("%d",&b[i][j]);}
}
// ADDITION //
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j] = a[i][j] + b[i][j];
}
}
// OUTPUT //
printf("SUM OF BOTH MATRIX =\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d ",c[i][j]);
}
printf("\n");
}
}


