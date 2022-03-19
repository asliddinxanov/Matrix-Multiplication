/*Matrix Multiplication*/
/*行列の積*/
/*asliddinxanov*/
#include<stdio.h>

int main(void)
{
	int i, j, k, m, r, n;
	double a[50][50], b[50][50], c[50][50];

	printf("行列Ａの行の数m=");
	scanf_s("%d", &m);
	printf("行列Ａの列の数r=");
	scanf_s("%d", &r);
	printf("行列Ｂの列の数n=");
	scanf_s("%d", &n);
	for (i = 1;i <= m;i++) {
		for (k = 1;k <= r;k++) {
			printf("a[%d][%d]=", i, k);
			scanf_s("%lf", &a[i][k]);
		}
	}

	for (k = 1;k <= r;k++) {
		for (j = 1;j <= n;j++) {
			printf("b[%d][%d]=", k, j);
			scanf_s("%lf", &b[k][j]);
		}
	}

	for (i = 1;i <= m;i++)
		for (j = 1;j <= n;j++) {
			c[i][j] = 0;
			for (k = 1;k <= r;k++)
				c[i][j] += a[i][k] * b[k][j];
		}

	printf("行列Ｃ:\n");
	for (i = 1;i <= m;i++) {
		for (j = 1;j <= n;j++)
			printf("   %6.2f", c[i][j]);
		printf("\n");
	}

	return(0);
}