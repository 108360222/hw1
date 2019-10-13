#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w, h, bmi,a;

	printf("input weight(kg) and height(meters)\n");
	scanf_s("%f%f", &w, &h);
	a = h*h;
	bmi = w / a;
	printf("Your BMI is %f \n",bmi);
	if (bmi < 18.5)
	{
		printf("Result:Underweight");
	}
	else if (bmi >= 18.5 && bmi < 24.9)
	{
		printf("Result:Normal");
	}
	else if (bmi >= 24.9 && bmi < 29.9)
	{
		printf("Result:Overweight");
	}
	else if (bmi > 30)
	{
		printf("Result:Obese");
	}
	system("pause");
	return 0;
}