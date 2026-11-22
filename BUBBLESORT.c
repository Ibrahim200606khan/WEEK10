#include<stdio.h>
int main()
{
int n,j,i,temp=0;
int a[100];
//INPUT //
printf("ENTER SIZE OF ARRAY: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
// SORT START //
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{temp = a[j];     // IMP IF COND  FOR SORTING //
a[j] = a[j+1];
a[j+1] = temp;}
}
}
// OUTPUT //
printf("SORTED ARRAY \n");
for(i=0;i<n;i++)
{printf(" %d ",a[i]);}
}
