#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int *p;
    int *a;

    p = malloc(sizeof(int));
    a = malloc(sizeof(int));

    //Memset -> preenchendo a posição do ponteiro com 0 zeros.
    memset(a, 0, sizeof(int));

    printf("memset(a) -> %d\n", *a);

    *p = 65;

    //Saving memory address inside a pointer #Cool!
    a = (int *)0x5555555592a0;

    printf("%p\n", p);
    printf("%p\n", a);
    printf("%d\n", *a);

    printf("%zu\n", sizeof(p));

    //Don't forget to free the malloc! lmao
    free(a);
    return 0;
}