#include <stdio.h>
int main() 
{
int N; //Number of * in the middle row
scanf("%d", &N); //Value of N is taken from test data
for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
    {
    	if(j>=N-i-1)
          printf("*");
     	else
        {
        	printf(" ");
        }
    }
  printf("\n");
}
for(int i=0;i<N-1;i++)
{
	for(int j=0;j<N;j++)
    {
    	if(j<=i)
          printf(" ");
     	else
        {
        	printf("*");
        }
    }
  printf("\n");
}
}
