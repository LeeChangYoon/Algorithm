#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
	int N;
 	scanf("%d", &N);

	int* Numbers = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", Numbers + i);

	qsort(Numbers, N, sizeof(int), compare);

	printf("\n");

	for (int i = 0; i < N; i++)
		printf("%d\n", Numbers[i]);

	Numbers = NULL;
	free(Numbers);

	return 0;
}

int compare(const void *a, const void *b)   
{
	int num1 = *(int *)a;   
	int num2 = *(int *)b;    

	if (num1 < num2) return -1;   
	if (num1 > num2) return 1;      

	return 0;    
}