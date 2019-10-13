#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("input 2 integers\n");
	scanf_s("%d%d", &a, &b);
	if (a%b == 0)
	{
		c = a / b;
		printf("%d is %d time of %d", a, c, b);
	}
	else printf("%d not a multiple of %d", a,b);
	system("pause");
	return 0;
}