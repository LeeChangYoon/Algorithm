#include <stdio.h>

int main()
{
	int N, Numbers[1000];

	scanf("%d", &N);

	if (1 <= N && N <= 1000);
	else
		exit(0);

	for (int i = 0; i < N; i++)
		scanf("%d", Numbers + i);
	
	quickSort(Numbers, 0, N - 1);

	printf("\n");

	printArray(Numbers, N);
	return 0;

}

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int* arr, int low, int high)
{
	int pivot = arr[high];    
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;  
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void quickSort(int* arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void printArray(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d\n", arr[i]);
}