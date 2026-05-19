#include <stdio.h>

void inputTwoNumbers(int *x, int *y);

int main(void)
{
	int a, b;

	inputTwoNumbers(&a, &b);

	printf("%d\n", a + b);
	return 0;
}

void inputTwoNumbers(int *x, int *y) 
{
	scanf("%d %d", x, y);
}
	