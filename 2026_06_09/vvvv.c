#include <stdio.h>
int main(void)
{ 
	int n, i, key;

	printf("Input size of the list : ");
	scanf("%d", &n);

	int list[n];

	printf("Input %d values of the list : ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);

	printf("Input a key value : ");
	scanf("%d", &key);
	
	for(i = 0; i < n; i++) {
		if (list[i] == key) {
			printf("Find the key at %d of the list array\n", i + 1);
			break;
		}
	}
	if (i ==n)
		printf("The key is not found\n");

	printf("End\n");
	return 0;
}
