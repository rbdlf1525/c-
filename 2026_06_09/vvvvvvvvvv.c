#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int set_num, i, j, k;
    int lotto[100][6];
    
    srand(time(NULL));
    
    scanf("%d", &set_num);
    
    for(k = 0; k < set_num; k++) {
        for(i = 0; i < 6; i++) {
            lotto[k][i] = rand() % 45 + 1;
            
            for(j = 0; j < i; j++) {
                if(lotto[k][i] == lotto[k][j]) {
                    i--;
                    break;
                }
            }
        }
    }
    
    for(k = 0; k < set_num; k++) {
        printf("set %d : ", k+1);
        for(i = 0; i < 6; i++) {
            printf("%d ", lotto[k][i]);
        }
        printf("\n");
    }
    
    return 0;
}