#include<stdio.h>
#include<math.h>
int main()
{
	int n = 25,sum=0,i,ret=0;
	for (i = 0; i < 32; i++)
	{
		ret = n & 1;
		sum = sum + ret*pow(2, 32 - i);
		n = n >> 1;
	}
	printf("%d", sum);

}
