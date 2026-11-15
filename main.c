#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    int com = 0;
    if (n < 0) {
        printf("NG\n");
    }
    else {
        for (int i = 0; i <= 50; i++) {
            for (int j = 0; j <= 50; j++) {
                if (i != j && i + j == n) {
                    com++;
                }
            }
        }
        printf("%d\n", com);
    }

    return 0;
}