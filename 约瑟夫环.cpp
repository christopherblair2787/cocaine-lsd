#include <stdio.h>
#define N 100
int josef(int a[], int n, int m)//定义循环函数
{
	int i, j, k = 0;
	for (i = 0; i < n; i++)
	{
		j = 1;
		while (j < m)
		{
			while (a[k] == 0)
				k = (k + 1) % n;
			j++;
			k = (k + 1) % n;
		}
		while (a[k] == 0)
			k = (k + 1) % n;
		printf("%d ", a[k]);
		a[k] = 0;
	}
	return 0;
}
int main()
{
	int a[100];//存放编号
	int i, j, m, n;//m为人数上限，n为传递的人数
	printf("input n and m：");
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		a[i] = i + 1;
	printf("\n output：\n");
	josef(a, n, m);
	printf("\n");
	return 0;
}