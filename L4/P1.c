#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *s, *n, *v, *i;
    s = (int*)malloc(sizeof(int));
	n = (int*)malloc(sizeof(int));
	printf("n="); 
	scanf("%d", n);
	v = (int*)malloc((*n) * sizeof(int));
    i = (int*)malloc(sizeof(int));
    for ((*i) = 0; (*i) < (*n); (*i)++)
	{
		printf("v[%d]=", (*i) + 1);
		scanf("%d", (v + (*i)));
	}
    *s = 0;
    for ((*i) = 0; (*i) < (*n); (*i)++)
	{
		*s = (*s) + *(v + (*i));
	}
    printf("Suma este:%d", *s);
	system("pause");
    return 0;
}
