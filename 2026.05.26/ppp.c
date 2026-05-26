#include <stdio.h>

int max(int a, int b) {
	if (a > b) 
		return a;
	else 
		return b;
}
int main (void) {
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, num2);
	printf("큰 값: %d\n", max(num1, num2));
	return 0;
}