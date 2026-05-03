#include <stdio.h>

int main(void){

    char *pointer;

    char a[4]={'A', 'T', 'G', 'C'};

    pointer = a;

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
    printf("Pointer -> %p\n", &a);
    printf("Pointer -> %p\n", a);
    return 0;
}