/*Matrix Multiplication*/
/*�s��̐�*/
/*asliddinxanov*/
#include<stdio.h>

int main(void)
{
	int i, j, k, m, r, n;
	double a[50][50], b[50][50], c[50][50];

	printf("�s��`�̍s�̐�m=");
	scanf_s("%d", &m);
	printf("�s��`�̗�̐�r=");
	scanf_s("%d", &r);
	printf("�s��a�̗�̐�n=");
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

	printf("�s��b:\n");
	for (i = 1;i <= m;i++) {
		for (j = 1;j <= n;j++)
			printf("   %6.2f", c[i][j]);
		printf("\n");
	}

	return(0);
}