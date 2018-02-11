#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

bool ARR[100001];

int main() {

	int i, N, M, QUESTION, ANS;

	memset(ARR, sizeof(ARR), false);

	for (scanf("%d", &N), i = 0; i < N; i++) {
		scanf("%d", &M);
		ARR[M] = true;
	}

	for (scanf("%d", &M); M--;) {

		scanf("%d", &QUESTION);
		
		ANS = ARR[QUESTION] ? 1 : 0;

		printf("%d\n", ANS);
	}

	return 0;
}