#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>

int N, i, j, M;
int answer, count, temp;
int arrN[100005];
int start, end, mid;

int compare(const void *a, const void *b) {
	if (*(int*)a > *(int*)b) {
		return 1;
	}
	if (*(int*)a < *(int*)b) {
		return -1;
	}

	return 0;
}

int main() {
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		scanf("%d", &arrN[i]);
	}

	qsort(arrN, N + 1, sizeof(int), compare);

	scanf("%d", &M);

	for (i = 1; i <= M; i++) {
		answer = 0;
		scanf("%d", &temp);
		start = 1;
		end = N;
		while (end - start >= 0) {
			mid = (start + end) / 2;
			if (temp == arrN[mid]) {
				answer = 1;
				break;
			}
			else if (arrN[mid] > temp) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}

		printf("%d\n", answer);
	}
}