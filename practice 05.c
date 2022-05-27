#include<stdio.h>
int main()
{
	double cgpa,ielts_score;


	printf("Enter cgpa:");
	scanf("%lf",&cgpa);
	printf("Enter ielts score:");
	scanf("%lf",&ielts_score);

	if(cgpa==3.50 || ielts_score>=6.50){

		printf("Malaysian Scholarship");
	}
	else{

		printf("No Scholarship");
	}

	return 0;

}
