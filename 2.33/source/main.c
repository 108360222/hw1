#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e, n;
	printf("input your Total miles driven per day\n");
	scanf_s("%d", &a);
	printf("input your Cost per gallon of gasoline\n");
	scanf_s("%d", &b);
	printf("input your Average miles per gallon\n");
	scanf_s("%d", &c);
	printf("input your Parking fees per day\n");
	scanf_s("%d", &d);
	printf("input your Tolls per day\n");
	scanf_s("%d", &e);
	n = b * (a / c) + d + e;
	printf("Your cost per day of driving to work:%d", n);
	system("pause");
	return 0;
}