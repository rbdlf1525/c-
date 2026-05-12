#include <stdio.h>
int main(void)
{ 
	int dan, i = 1;

	printf("Enter your dan : ");
	scanf("%d", &dan);

	while(i <= 9) {
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}