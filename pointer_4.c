#include <stdio.h>

int main(int argc, char *argv[]){
    char *p;
    char a = 'A';

    p = &a;
    printf("size of int -> %zu\n", sizeof(char));

    printf("%c\n", *p+0);
    printf("%c\n", *p+1);
    printf("%c\n", *p-1);
    printf("\n\n");
    printf("%p\n", &a+0);
    printf("%p\n", &a-1);

    return 0;
}