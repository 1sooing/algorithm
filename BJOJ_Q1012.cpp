#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int col;
	int row;
}element;
typedef struct
{
	int row_num;
	int col_num;
	int worm_num;
	element * info;
}Field;
int isContain(int col, int row, Field * a)
{
	int i;
	for (i = 0; i<a->worm_num; i++)
		if (a->info[i].col == col && a->info[i].row == row)
			return i;
	return -1;
}
int searchR(int col, int row, Field * a)
{
	int temp, flag = 0;
	if (col < 0 || row < 0 || col > a->col_num || row > a->row_num)
		return 0;
	if (isContain(col, row, a) > -1)
	{
		temp = isContain(col, row, a);
		a->info[temp].col = -1;
		a->info[temp].row = -1;
	}
	else if (isContain(col, row, a) == -1)
		return 0;
	switch (flag++)
	{
	case 0: searchR(col + 1, row, a);
	case 1: searchR(col, row + 1, a);
	case 2: searchR(col, row - 1, a);
	case 3: searchR(col - 1, row, a);
	}
}
int main()
{
	int case_num, i, j, cnt = 0;
	Field ** Field_arr;
	scanf("%d", &case_num);
	Field_arr = (Field **)calloc(case_num, sizeof(Field));
	for (i = 0; i<case_num; i++)
	{
		Field_arr[i] = (Field *)calloc(1, sizeof(Field));
		scanf("%d %d %d", &(Field_arr[i]->col_num), &(Field_arr[i]->row_num), &(Field_arr[i]->worm_num));
		Field_arr[i]->info = (element *)calloc(Field_arr[i]->worm_num, sizeof(element));
		for (j = 0; j<Field_arr[i]->worm_num; j++)
			scanf("%d %d", &(Field_arr[i]->info[j].col), &(Field_arr[i]->info[j].row));
	}
	for (i = 0; i<case_num; i++)
	{
		for (j = 0; j<Field_arr[i]->worm_num; j++)
			if (Field_arr[i]->info[j].col > -1)
			{
				cnt++;
				searchR(Field_arr[i]->info[j].col, Field_arr[i]->info[j].row, Field_arr[i]);
			}
		printf("%d\n", cnt);
		cnt = 0;
	}
}