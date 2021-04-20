#include<stdio.h>
#include<math.h>
int main(){
	int i = 0, j = 0, count=0;
	char arr[100] = { 0 };
	do{
		j = scanf("%c", &arr[i]);
		
		if (j == EOF)
			break;
		getchar();
		i++;
		count++;
	} while (i<100);
	j = 2;
	while (j>=0)
	{
        int k=1;
		for(int n=0;n<j;n++)
        {
            k*=10;
        }
		arr[i] = count / k + 48;
		count %= k;
        j--;i++;
	}
	printf("%s", arr);
}