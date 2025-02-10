#include "sort.h"

void bubble_sort(int* array, int length) 
{
	for (int i = 1; i < length; i++)
	{
		for (int g = 0; g < length - 1	; g++)
		{
			if (array[g] < array[g + 1])
			{
				int t = array[g + 1];
				array[g + 1] = array[g];
				array[g] = t;
			}
		}
	}
}