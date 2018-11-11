#include <stdio.h>

#define MAX 10000

int main()
{
	int M, N;
	int result_min;
	int result_sum;

	scanf("%d", &M);
	scanf("%d", &N);

	if (M <= MAX && N <= MAX && M <= N);
	else
		exit(0);
	
	result_sum = Prime_Sum(M, N);
	printf("%d\n", result_sum);

	result_min = Prime_Min(M, N);
	printf("%d\n", result_min);

	return 0;
}

int Prime(int a)
{
	int j;

	for (j = 2; j <= a; j++)
	{
		if (a%j == 0)
		{
			if (a == j)	return a;
			else return 0;
		}
	}
}

int Prime_Sum(int min, int max)
{
	int sum = 0;
	int prime_number;

	for (int i = min; i <= max; i++)
	{
		prime_number = Prime(i);
		sum = sum + prime_number;	
	}
	return sum;
}

int Prime_Min(int min, int max)
{
	for (int i = min; i <= max; i++)
	{
		if (Prime(i) != 0)
			return Prime(i);
	}
}