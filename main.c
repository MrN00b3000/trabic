#include <stdio.h>

int main() {
    printf("ola mundo\n");
    int y=0;
    scanf("%d", &y);
    printf("o valor de y é: %d\n", y);

    for (int i = 0; i < 10; i++) {
        printf("i: %d\n", i);

    }

    int *p = NULL;
    p = &y;
    printf("o valor de y através do ponteiro é: %d\n", *p);
    
    return 0;
}
