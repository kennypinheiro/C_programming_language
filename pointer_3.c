#include <stdio.h>
/* Obs: char a = {'A', 'T', 'G', 'C'};  --> pointer = &a */

int main(int argc, char *argv[]){
    char s[4] = {'A', 'G', 'C', 'T'};
    char *p;

    p = s;

    printf("%p\n", *p);

    printf("1:Pointer memory address- > %p\n", &p);
    printf("2:Pointer memory address- > %p\n", p);
    
    printf("Variavel memory address s -> %p\n", &s[0]);
    printf("Variavel s -> %p\n", s[0]);
    printf("Variavel s -> %x\n", s[0]);

    return 0;
}