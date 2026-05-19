#include <stdio.h>

int add(int x, int y);

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", add(a,b));
	return 0;
}
	int add(int x, int y)
{
	return x + y;
}