#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long long int in[31][31];

int main()
{
	int t, m, n, i, j, k;

	for (i = 0; i <= 30; i++)
		in[0][i] = 1;

	for (i = 0; i <= 30; i++)
		for (j = i + 1; j <= 30; j++)
			for (k = 0; k<j; k++)
				in[i + 1][j] += in[i][k];

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d %d", &n, &m);
		printf("%d\n", in[n][m]);
	}
}
