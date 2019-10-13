#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("number\tsquare\tcube\n");
	int i,a,b;
	for (i = 0; i <= 10; i++)
	{
		a = i*i;
		b = i*i*i;
		printf("%d\t%d\t%d\n", i, a, b);
	}
	system("pause");
	return 0;
}