#include<stdio.h>

void inputTwoNumbers(int *x, int *y);
int add(int x, int y);
void printSum(int x, int y);

int main(void) {
	int i = 0, j = 0;

	inputTwoNumbers(&i, &j);

	printSum(i, j);

	return 0;
}
void inputTwoNumbers(int *x, int *y) {
	scanf("%d %d", x, y);
}
int add(int x, int y){
	return x+y;
}
void printSum(int x, int y) {
	printf("%d\n", x + y);
}

