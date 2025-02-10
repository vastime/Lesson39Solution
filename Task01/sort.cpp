#include "sort.h"
void bubble_sort(int* array, int size) {
	int  size_minus_one = size - 1;

	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size - 1; k++)
		{
			if (array[k] < array[k + 1])
			{
				int t = array[k + 1];
				array[k + 1] = array[k];
				array[k] = t;
			}
		}
	}
}