#include<stdio.h>
int main()
{
int a[3][3];
int i,j;
printf("ENTER 3x3 MATRIX:\n");
// INPUT //
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
 // LOWER TRIANGULAR MATRIX //
printf("\nLOWER TRIANGULAR MATRIX:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i>=j) // LOWER TRI COND //
{printf("%d",a[i][j]);}
else
{printf(" 0 ");}
}
printf("\n");
}
// UPPER TRIANGULAR MATRIX //
printf("\nUPPER TRIANGULAR MATRIX:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i<=j) // UPPER TRI COND //
{printf("%d",a[i][j]);}
else
{printf(" 0 ");}
}
printf("\n");}
return 0;
}
