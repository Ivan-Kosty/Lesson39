#include "sort.h"

int bubble_sort(int* array, int length) 
{
	int count = 0;
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
			count++;
		}
		if (flag) {
			break;
		}
	}
	return count;
}