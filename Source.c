#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int a = 9, b = 3, rezultat_inmultire = 0, bitul = 0, valoare_bit, pas = -1, produs_final = 0;
	while (bitul < 8)
	{
		if (b&(1 << bitul) == (1 << bitul) || b % 2 == 0)
		{
			valoare_bit = 1 & (b >> bitul);
			if (valoare_bit == 1)
			{
				rezultat_inmultire = a;
				pas++;
			}
			else
			{
				rezultat_inmultire = 0;
				pas++;
			}
			rezultat_inmultire = rezultat_inmultire << pas;
			produs_final = produs_final + rezultat_inmultire;
		}
		bitul++;
	}
	printf("%d", produs_final);
	system("pause");
	return 0;
}