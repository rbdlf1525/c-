#include <stdio.h>

void printsum(int x, int y);

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	printsum(a, b);
	return 0;
}

void printsum(int x, int y) 
{
	printf("%d\n", x + y);
}