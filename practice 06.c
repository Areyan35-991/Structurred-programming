#include<stdio.h>
int main()
{
	double invesment,income,profit,loss;

	printf("Enter the invesment:");
	scanf("%lf",&invesment);
	printf("Enter the income:");
	scanf("%lf",&income);

	if(invesment>income)
	{
		loss=invesment-income;
		printf("Loss:%.3lf",loss);

	}
	else
	{

		profit=income-invesment;
		printf("Profit:%.3lf",profit);

	}

	return 0;

}
