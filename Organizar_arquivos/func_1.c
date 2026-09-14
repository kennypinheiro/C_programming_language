#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b, int c){
    return a + b + c;
}

void saida(char *msg){
    printf(msg);
    exit(0);
}

void saida_2(char msg[]){
    printf(msg);
    exit(0);
}

int main(int argc, char *argv[]){
    int a, b, c, sum;
    scanf("%d%d%d", &a, &b, &c);
    sum = soma(a, b, c);

    printf("Valores: %d | %d | %d\n", a,b,c);
    printf("SUM -> %d\n", sum);
    printf("%p\n", soma);
    printf("%p\n", &soma);

    saida("Hello World!\n");
    return 0;
}