#include "sort.h"

void bubble_sort(int* array, int length) 
{
	
	for (int i = 1; i < length - 1 - i; i++)
	{
		bool flag = true;
		for (int g = 0; g < length - 1; g++)
		{
			if (array[g] > array[g + 1])
			{
				int t = array[g + 1];
				array[g + 1] = array[g];
				array[g] = t;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
}

//O(N^2)
int selected_sort(int* vector, int length) {
	for (int j = 0; j < length; j++)
	{
		int count = 0;
		int index = j;
		for (int i = j + 1; i < length; i++)
		{
			if (vector[i] < vector[index]) {
				index = i;
			}
			count++;
		}
		int t = vector[j];
		vector[j] = vector[index];
		vector[index] = t;
	}
	return 0;
}