#include <stdio.h>

int main(void){

    char *pointer;

    char a[4]={'A', 'T', 'G', 'C'};

    pointer = a;
    
    /* Obs: char a = {'A', 'T', 'G', 'C'};  --> pointer = &a */

    for (int i =0; i < 4; i++){
        printf("%c\n", *(a+i));
    }
    printf("\n");
    for (int i =0; i < 4; i++){
        printf("%p\n", a+i);
    }
    printf("\n");
    for (int i =0; i < 4; i++){
        printf("%p\n", &a[i]);
    }
    printf("\n");

    printf("Pointer -> %p\n", &pointer);
    printf("Pointer -> %p\n", pointer);
    printf("Variavel a -> %p\n", &a);
    printf("Variavel a -> %p\n", a); //Mostra o endereço da primeira posição do vetor (se fosse uma vaiável iria mostrar o conteúdo armazenado em hexadecimal)
    return 0;
}
