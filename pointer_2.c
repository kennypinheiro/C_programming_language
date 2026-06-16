#include <stdio.h>

int main(void){
    int a = 17;

    int *p;
    p = &a;

    printf("%p\n", a); //Mostra o conteúdo armazenado em hexadecimal. Se fosse um vetor iria mostrar a primeira posição em hexadecimal.
    printf("%p\n", &a);

    printf("pointer -> %p\n", p); 
    printf("pointer -> %d\n", *p);

    return 0;
}