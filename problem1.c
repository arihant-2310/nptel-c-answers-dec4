#include <stdio.h>
#include <malloc.h>
	 
int main()
  {
   int n;
   scanf("%d", &n); //number of elements of the arrays is accepts from test data   

int *ptr1,*ptr2,*ptr3;
ptr1 = (int*)malloc(n * sizeof(int));
ptr2 = (int*)malloc(n * sizeof(int));
ptr3 = (int*)malloc(n * sizeof(int));
for(int i=0;i<n;i++)
{
  int ele;
  scanf("%d",&ele);
  ptr1[i]= ele;
}

for(int i=0;i<n;i++)
{
  int ele;
  scanf("%d",&ele);
  ptr2[i]= ele;
}

for(int i =0;i<n;i++)
{
	ptr3[i]= ptr1[i]+ptr2[i];
}

        for (int i = 0; i < n; ++i) { 
            printf("%d\n", ptr3[i]); 
        }
}
