#include <stdio.h>

int partition(int* a, int low, int high);
void quickSort(int* a, int low, int high);

int main()
{
    
}

void quickSort(int* a, int low, int high) {
	if (low < high)
	{
		int pivot_location = partition(a, low, high);

		quicksort(a, low, pivot_location);
		quicksort(a, pivot_location + 1, high);
	}
}

int partition(int* a, int low, int high) {
	int pivot = a[low];
	int leftwall = low;

	for (int i = (low + 1); i <= high; i++)
	{
		if (a[i] < pivot)
		{
			int temp = a[i];
			a[i] = leftwall;
			leftwall = temp;
			leftwall++;
		}
	}

	return leftwall - 1;
}
