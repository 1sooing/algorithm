#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int pow(int x) {
	return x * x;
}

int main() {

	int t, n, ans;
	int x1, y1, x2, y2;
	int cx, cy, r;
	int d1, d2;

	for (scanf("%d", &t); t--; printf("%d\n", ans)) {

		ans = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		for (scanf("%d", &n); n--;) {
			scanf("%d %d %d", &cx, &cy, &r);

			d1 = pow(cx - x1) + pow(cy - y1);
			d2 = pow(cx - x2) + pow(cy - y2);
		
			if (d1 < pow(r) && d2 > pow(r))
				ans++;
			if (d1 > pow(r) && d2 < pow(r))
				ans++;
		}
	}

	return 0;
}