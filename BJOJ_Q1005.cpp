#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int B[1001];

int main() {

	int T, N, K, W, ANS;
	int i;

	for (scanf("%d", &T); T--; printf("%d\n", ANS)) {
		
		scanf("%d %d", &N, &K);
		memset(B, sizeof(B), 0);

		for (i = 1; i <= N; i++) {
			scanf("%d", &B[i]);
		}

		for (i = 0; i < K; i++) {
			scanf("%d %d", &i, &i);
		}

		scanf("%d", &W);


	}

}