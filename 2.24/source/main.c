#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("input an integer :\n");
	scanf_s("%d", &a);
	if (a % 2 ==0)
	{
		printf("%d is even", a);
	}
	else printf("%d is odd", a);
	system("pause");
	return 0;
}