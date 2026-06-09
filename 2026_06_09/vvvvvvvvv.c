#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int set_num, i, j, k;
    int lotto[6];
    
    srand(time(NULL));
    
    scanf("%d", &set_num);
    
    for(k = 1; k <= set_num; k++) {
        for(i = 0; i < 6; i++) {
            lotto[i] = rand() % 45 + 1;
            for(j = 0; j < i; j++) {
                if(lotto[i] == lotto[j]) {
                    i--;
                    break;
                }
            }
        }
        
        printf("set %d : ", k);
        for(i = 0; i < 6; i++) {
            printf("%d ", lotto[i]);
        }
        printf("\n");
    }
    
    return 0;
}