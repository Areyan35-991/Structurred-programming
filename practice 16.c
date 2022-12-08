#include <stdio.h>
void main()
{
   int i,n,sum=0,odd;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
      odd=2*i-1;
     printf("%d ",odd);
     sum+=odd;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}
