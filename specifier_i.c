#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero: ");
    // Se digitar 010, lê 8. Se digitar 0x10, lê 16. Se digitar 10, lê 10.
    scanf("%i", &num);
    printf("Valor: %i\n", num); 
    return 0;
}