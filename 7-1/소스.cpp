#include <stdio.h>

int main()
{
	int a;
	int b;

	for (a = 1; a <= 5; a++)
	{
		for (b = 5; b >= a; b--)
		{
			printf("%d", b);
		}
		printf("\n");
	}
}