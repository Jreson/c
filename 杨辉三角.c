#include<stdio.h>
int main2()
{
	int q = 0, i, j;
	int arr[10][10] = { 0 };//��ӡʮ��ʮ�еĶ�ά���飨�������ģ�ͣ�
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == j) || (j == 0))//������Ϊ1
			{
				arr[i][j] = 1;
			}
			if ((i > 1) && (j<=i) && (j>=1))
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//a[i][j]:iΪ�ڼ��У�jΪ�ڼ���
			}
		}
	}
	for (i = 0; i < 10; i++)//��ӡ�����һ��
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
