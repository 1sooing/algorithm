#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int n0 = 0, n1 = 0;

int fibonachi(int n)
{
	if (n == 0)
	{
		n0++;
		return 0;
	}
	else if (n == 1)
	{
		n1++;
		return 1;
	}
	else
		return fibonachi(n - 1) + fibonachi(n - 2);
}

int main()
{
	int t, n;
	for (scanf("%d", &t); t--;)
	{
		n0 = 0;
		n1 = 0;
		scanf("%d", &n);
		fibonachi(n);
		printf("%d %d\n", n0, n1);
	}
	return 0;
}