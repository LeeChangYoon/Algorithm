#include <stdio.h>

int main()
{
	int n;
	int result;

	scanf("%d", &n);

	if (2 <= n && n <= 17);
	
	else
		exit(0);

	result = Fib(n);
	printf("%d", result);

	return 0;
}

int Fib(int n)
{
	int first = 0;
	int second = 1;
	int temp = 0;

	while (n)
	{
		first = second;
		second = temp + first;
		temp = first;
		n--;
	}

	return first;
}