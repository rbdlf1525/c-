#include <stdio.h>

int getSum(int n);

int main(void){
	int i, j;

	j = getSum(10);

	printf("the sum(0 : %d) = %d\n", 10, j);
	return 0;
}

int getSum(int n) {
	int sum = 0;
	int i;

	for (i = 0; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}