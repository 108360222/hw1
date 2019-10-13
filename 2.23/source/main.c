#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,max,min;
	printf("input 3 integers\n");
	scanf_s("%d%d%d",&a,&b,&c);
	max = a;
	min = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	printf("The largest number is %d\n",max);
	printf("The smallest number is %d\n",min);
	system("pause");
	return 0;
}