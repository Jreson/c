#include<stdio.h>
int main() 
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'C')) == 3)
		{
			printf("Ð×ÊÖÊÇ%c\n", killer);
		}
	}
}
