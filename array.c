#include <stdio.h>

/**
 * sort_function - a function that sorts array
 * reverse_function - a function that reverse array
 * max_function - a function that gets the max array value
 * min_function - a function that gets the min array value
 * print_function - a function prints out the values of a array
 *
 * main  - main function or the entry point in c programming
 *
 * @my_arr: array variable of type int
 *
 * @a: variable of type int
 * @b: variable of type int
 * @p: pointer variable parameter of type int
 * @n: variable of type int
 *
 * @arry: pointer variable parameter of type int
 * @num: pointer variable parameter of type int
 *
 * Return: always 0 on success
 */

void print_function(int *arry, int num)
{
	int count;

	for (count = 0; count < num; count++)
	{
		printf("%d ", arry[count]);
	}
}

void sort_function(int *p, int n)
{
	int a, b, temp;

	for (a = 0; a < n; a++)
	{
		for (b = (a + 1); b < n; b++)
		{
			if (p[a] > p[b])
			{
				temp = p[a];
				p[a] = p[b];
				p[b] = temp;
			}
		}
	}
	print_function(p, n);
}

void reverse_function(int *p, int n)
{
	int a, b, temp;

	for (a = 0; a < n; a++)
	{
		for (b = (a + 1); b < n; b++)
		{
			if (p[a] < p[b])
			{
				temp = p[a];
				p[a] = p[b];
				p[b] = temp;
			}
		}
	}
	print_function(p, n);
}

void max_function(int *p, int n)
{
	int a, temp = p[0];

	for (a = 0; a < n; a++)
	{
		if (p[a] > temp)
			temp = p[a];
	}
	printf("%d", temp);
}

void min_function(int *p, int n)
{
	int a, temp = p[0];

	for (a = 0; a < n; a++)
	{
		if (p[a] < temp)
			temp = p[a];
	}
	printf("%d", temp);
}


int main(void)
{
	int n, my_arr[] = {23, 43, 2, 21123, 34454, 565, 77, 5, 2, 37, 90, 0};

	n = (sizeof(my_arr) / sizeof(my_arr[0]));

	printf("This is the original array:\n");
	print_function(my_arr, n);

	printf("\n\nThis is the array when sorted:\n");
	sort_function(my_arr, n);

	printf("\n\nThis is the array in reverse:\n");
	reverse_function(my_arr, n);

	printf("\n\nThis is the maximum number in the array:\n");
	max_function(my_arr, n);

	printf("\n\nThis is the minimum number in the array:\n");
	min_function(my_arr, n);
	printf("\n");

	return (0);
}
