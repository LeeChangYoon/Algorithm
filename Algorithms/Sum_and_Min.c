#include <stdio.h>

int main()
{
	int arr[10000];
	int M, N;
	int sum = 0;
	scanf_s("%d %d", &M, &N);
	int MIN = N;

	for (int i = M; i <= N; i++)
		arr[i] = i;
	
	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == 0) continue;

		for (int j = i + i; j <= N; j += i)
			arr[j] = 0;
	}

	for (int i = M; i <= N; i++)
	{
		sum = sum + arr[i];
		if (arr[i] != 0 && MIN > arr[i])
		{
			MIN = arr[i];
		}
	}

	printf_s("%d\n%d\n", sum, MIN);

	return 0;
}
