#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int pow2(int x1) {
	return x1 * x1;
}

int main() {
	int t, ans, x1, y1, x2, y2, r1, r2;
	int d;

	for (scanf("%d", &t); t--; printf("%d\n", ans)) {

		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = pow2(x1 - x2) + pow2(y1 - y2);

		if (x1 == x2 && y1 == y2 && r1 == r2) {
			ans = -1;
			continue;
		}

		if (d == pow2(r1 + r2) || d == pow2(r1 - r2)) {
			ans = 1;
			continue;
		}

		if (d > pow2(r1 + r2) || d < pow2(r1 - r2)) {
			ans = 0;
			continue;
		}

		if (d < pow2(r1 + r2) && d > pow2(r1 - r2)) {
			ans = 2;
			continue;
		}
	}
	return 0;
}