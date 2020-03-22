#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int p, a, b, s, c, z;

	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	c = 0;
	while (a)
	{
		c = c + b;
		a--;
	}

	p = 1;
	z = 0;
	while (c)
	{
		z = z + p * (c % 2);
		c = c / 2;
		p = p * 10;
	}
	printf("%d", z);

	return 0;
}
