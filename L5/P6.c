#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{	int n,s[100],vf,a,i,p=0,x;
	vf = 0;
	printf("n=");
	scanf("%d", &n);
	if (n <= 255)
	{
		do
		{
			a = n % 2;
			if (a == 1)
				p++;
			s[vf++] = a;
			n = n / 2;
		} while (n != 0);
		
		for (i = vf - 1; i > -1; i--)
			printf("%d ", s[i]);
		printf("\n");
		x = vf - p;
		for (i = 0; i < p; i++)
			printf("1 ");
		for (i = 0; i < x; i++)
			printf("0 ");
		
	}
	
	system("pause");
	return 0;
}