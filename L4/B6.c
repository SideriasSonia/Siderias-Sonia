#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b)
{
	int *s;
	s = (int*)malloc(sizeof(int));
	*s = 0;
	*s = a + b;
	return *s;
}
int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("%d",suma(a, b));
    system("pause");
	return 0;
}
