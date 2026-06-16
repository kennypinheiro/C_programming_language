#include <stdio.h>

int main(int argc, char *argv[]){
    int a = 17;

    int *pointer;

    pointer = &a;

    printf("Size of pointer: %zu\n bytes", sizeof(pointer));

    int *j;

    j = &a;

    printf("pointer j -> %d\n", *j);

    return 0;

}