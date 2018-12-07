#include <stdio.h>

int fibo(int num)
{
	if (num == 0 || num == 1)
		return num;
	else
		return fibo(num - 1) + fibo(num - 2);
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf_s("%d\n", fibo(n));
	return 0;
}
