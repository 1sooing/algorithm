#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n;
	int t;
	int i, j;
	int n_comp;
	int n_comp_order = 0;
	int n_Rank = 0;

	int arr_P[50];
	int arr_A[50];
	int arr_Rank[50];

	scanf("%d", &n);

	for (i = 0; i < n; i++)			// A 완성
	{
		scanf("%d", &t);
		arr_A[i] = t;
	}

	for (i = 0; i < n; i++)			// A Rank 완성
	{
		for (j = 0; j < n; j++)
		{
			if (arr_A[j] >= n_comp)
			{
				n_comp = arr_A[j];
				n_comp_order = j;
			}
		}
		arr_Rank[n_comp_order] = n_Rank++;
		arr_A[n_comp_order] = 0;
		n_comp = 0;
	}

	for (i = 0; i < n; i++)			// P 완성
	{
		arr_P[i] = n - 1 - arr_Rank[i];
	}

	for (i = 0; i < n; i++)
		printf("%d ", arr_P[i]);
}