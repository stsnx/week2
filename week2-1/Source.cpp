#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int t[1000][1000], m[1000][1000], ans[1000][1000];
int main()
{
	int x1, y1;
	scanf("%d %d", &y1, &x1);
	for (int i = 0; i < y1; i++)
	{
		for (int j = 0; j < x1; j++)
			scanf("%d", &t[i][j]);
	}
	int x2, y2;
	scanf("%d %d", &y2, &x2);
	for (int i = 0; i < y2; i++)
	{
		for (int j = 0; j < x2; j++)
			scanf("%d", &m[i][j]);
	}
	int te = 0, xj = 0;
	for (int i = 0; i < y1; i++)
	{
		for (int j = 0; j < x2; j++)
		{
			for (int x = 0; x < x1; x++)
			{
				te += t[i][x] * m[x][xj];
				//	printf("%d*%d %dte\n",t[i][x],m[x][xj],te);
			}
			xj++;
			//	printf("%d %d %d\n",i,xj,te);
			ans[i][j] = te;
			te = 0;
		}
		xj = 0;
	}
	for (int i = 0; i < y1; i++)
	{
		for (int j = 0; j < x2; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}
	return 0;
}
