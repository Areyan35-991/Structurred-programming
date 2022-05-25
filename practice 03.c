#include <stdio.h>
int main () {

	int Bangla,English,Physics,Math,Science,aggregate;
	float percentage;

	printf("Enter the number of Bangla: ");
	scanf("%d",&Bangla);
	printf("Enter the number of English: ");
	scanf("%d",&English);
	printf("Enter the number of Physics: ");
	scanf("%d",&Physics);
	printf("Enter the number of Math: ");
	scanf("%d",&Math);
	printf("Enter the number of Science: ");
	scanf("%d",&Science);

	aggregate=Bangla+English+Physics+Math+Science+aggregate;
	percentage=aggregate*(100.00/500.00);

	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);


	return 0;

}
