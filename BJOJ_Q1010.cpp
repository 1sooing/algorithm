#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int foo(int n, int r)
{
	if (n == r) return 1;
	if (r == 1) return n;
	return foo(n - 1, r) + foo(n - 1, r - 1);
}
int main()
{
	int i, t, m, n;
	long long int r_a;

	scanf("%d", &t);

	for (i = 0; i<t; i++) {
		scanf("%d%d", &m, &n);

		r_a = foo(n, m);

		printf("%lld\n", r_a);
	}
}