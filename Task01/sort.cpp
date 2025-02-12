#include "sort.h"
void bubble_sort(int* array, int size) {
	
	for (int j = 0; j < size; j++)
	{
		bool flag = true;
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (array[i] < array[i + 1])
			{
				int t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
				flag = false;
			}
			
		}
		if (flag) {
			break;
		}
	}
}
  void selected_sort(int* array, int size) {
	  int count = 0;
	for  (int j = 0; j < size; j++)
	{
		int index = j;
		for (int  i = j + 1; i < size; i++)
		{
			if (array[i] < array[index]) {
				index = i;
			}
			count++;
		}
	
		int t = array[j];
		array[j] = array[index];
		array[index] = t;
		
	}
	
}