#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int top = -1, stiva[MAX_SIZE];

void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("EROARE");
		return;
	}

	stiva[++top] = x;
}

void PrintStiva()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf("%d", stiva[i]);
		printf("\n");
	}

}

int main()

{

	int n, a[50], i, k, b[50], nr, x, nr1, N, y, total = 0;

	scanf("%d", &N);

	do {
		k = 0;
		nr = 0; nr1 = 0;
		scanf("%d", &n);
		x = n;
		while (n != 0)
		{
			a[k] = n % 10;
			n = n / 10;
			k++;
		}
		y = k;
		while (x != 0)
		{
			b[k - 1] = x % 10;
			x = x / 10;
			k--;
		}
		for (i = 0; i < y; i++)
			nr = nr * 10 + a[i];
		for (i = 0; i < y; i++)
			nr1= nr1 * 10 + b[i];

		if (nr == nr1)
			Push(nr);
		total++;

	} while (total != N);

	PrintStiva();
	system("pause");
	return 0;

}