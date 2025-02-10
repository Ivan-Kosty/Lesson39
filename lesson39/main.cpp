#include <iostream>
#include "util.h"
#include "sort.h"
#include <ctime>
using namespace std;

#define SIZE 20

int main()
{
	int numbers[SIZE];

	init(numbers, SIZE, 0, 100);

	cout << "Before: " << convert(numbers, SIZE) << endl;

	bubble_sort(numbers, SIZE);

	cout << "After: " << convert(numbers, SIZE) << endl;

	return 0;
}