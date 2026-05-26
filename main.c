#include <stdio.h>

int main(){
    printf ("olá mundo\n");
    
    int x;
    int y;
    int z[10];
    int *p;

    if  (1) {
        x = 10;
        y = 20;
        p = z;
    }
    else    {
        x = 30;
        y = 40;
        p = z + 5;
    }
    for (int i = 0; i < 10; i++) {
        p[i] = i;
    }   
    while (x < y) {
        printf("%d ", p[x]);
        x++;
    }
    switch (y) {
        case 20:
            printf("\nValor de y é 20\n");
            break;
        case 40:
            printf("\nValor de y é 40\n");
            break;
        default:
            printf("\nValor de y é desconhecido\n");
    }

    
    return 0;
}
