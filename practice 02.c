#include<stdio.h>
int main()
{
	double a,b,mul,div;

	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);

	mul=a*b;
	div=a/b;

	printf("Value of Multiply=%.3lf\n",mul);
	printf("Value of Division=%.3lf\n",div);


    return 0;

}
