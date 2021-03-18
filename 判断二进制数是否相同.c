#include<stdio.h>
int  main2()
{
	int m = 0, n = 0, count = 0;
	scanf_s("%d%d", &m, &n);
	m ^= n;
	while (m)
	{
		if ((m & 1) == 1)
		{
			count++;
		}
		m = m >> 1;
	}
	printf("一共有%d个不同的数\n", count);
}