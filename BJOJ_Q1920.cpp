#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int ARR[10001];

int compare(const void *a, const void *b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;

	return 0;
}

int main() {

	int i, N, M, QUESTION;
	
	for (scanf("%d", &N), i = 0; i < N; i++) {
		scanf("%d", &ARR[i]);
	}

	qsort(ARR, N, sizeof(int), compare);

	for (scanf("%d", &M); M--;) {

		scanf("%d", &QUESTION);

		printf("%d\n", (int*)bsearch(&QUESTION, ARR, N, sizeof(int), compare) ? 1 : 0);
	}

	return 0;
}