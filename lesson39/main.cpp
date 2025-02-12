#include <iostream>
#include "util.h"
#include "sort.h"
#include <ctime>
using namespace std;

#define SIZE 10

int main()
{
	int vector[SIZE];//{ 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, };

	init(vector, SIZE, -10, 10);

	cout << "Before: " << convert(vector, SIZE) << endl;

	//int count = bubble_sort(vector, SIZE);
	selected_sort(vector, SIZE);
	cout << "After: " << convert(vector, SIZE) << endl;

	//cout << "Count: " << count << endl;
	return 0;
}