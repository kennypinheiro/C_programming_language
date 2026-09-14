#include <stdio.h>

int main(void){
    int i = 0;

    bloco:
    printf("Valor = %d\n", i);
    i++;
        if (i < 5){
            goto bloco;
        }
    return 0;
}