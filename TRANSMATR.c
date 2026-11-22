#include<stdio.h>
int main()
{
int a[100][100],trans[100][100];
int n,m,i,j;
printf("ENTER ROWS ORDER: ");
scanf("%d",&n);
printf("ENTER COLUMNS ORDER: ");
scanf("%d",&m);
// INPUT //
printf("ENTER MATRIX:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
// TRANSING //
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
trans[j][i] = a[i][j];
}
}
printf("TRANSPORSE = \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(" %d ",trans[i][j]);
}
printf("\n");
}
return 0;
}
