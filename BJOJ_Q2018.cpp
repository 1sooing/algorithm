#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, tmp, ANS=1;

	scanf("%d", &N);

	for (i = 2; i < N; i++) {

		// case of odd
		if ( i % 2 ) {
			if ( (N%i == 0) && (N/i - i/2 > 0) )
				ANS++;
		}

		// case of even
		else {
			tmp = N / i;
			if (tmp - i / 2 > -1)
				if ((2 * tmp + 1) * i / 2 == N)
					ANS++;
		}
	}
	printf("%d\n", ANS);
    return 0;
}