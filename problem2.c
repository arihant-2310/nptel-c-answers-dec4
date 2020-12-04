#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n); //Value of n is accepted from test case
 

// Use the printf statement as:
//printf("The Sum of Series up to Value %d = %d\n",n,sum);
int sum=0,i,j;
for(i=1;i<=n;i++)
  for(j=1;j<=i;j++)
  	sum=sum+j;
printf("The Sum of Series up to Value %d = %d\n",n,sum);
}
