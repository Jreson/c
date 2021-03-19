#include<stdio.h>
int main2()
{
	int q = 0, i, j;
	int arr[10][10] = { 0 };//打印十行十列的二维数组（杨辉三角模型）
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == j) || (j == 0))//两边数为1
			{
				arr[i][j] = 1;
			}
			if ((i > 1) && (j<=i) && (j>=1))
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//a[i][j]:i为第几列，j为第几行
			}
		}
	}
	for (i = 0; i < 10; i++)//打印数组的一半
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
