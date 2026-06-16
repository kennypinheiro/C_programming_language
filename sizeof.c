#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// %zu é usado para imprimir o tamanho retornado por sizeof
// %lu 'unsigned long' também pode ser usado

int main(void) {
    int i = INT_MAX;  //limits.h
    printf("O tamanho de 'int_max' é: %d\n", i);

    size_t int_tam = sizeof(int);
    printf("O tamanho de um int é: %zu bytes\n", int_tam); 

    size_t char_tam = sizeof(char);
    printf("O tamanho de um char é: %zu byte\n", char_tam);

    size_t float_tam = sizeof(float);
    printf("O tamanho de um float é: %zu bytes\n", float_tam); 

    size_t double_tam = sizeof(double);
    printf("o tamanho de um double é: %zu bytes \n", double_tam);

    return 0;
}
