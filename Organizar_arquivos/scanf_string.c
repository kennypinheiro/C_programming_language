#include <stdio.h>
#define TAM 15

int main(int argc, char *argv[]){
    char str[TAM];
    printf("Digite uma palavra (15 letras):\n");
    scanf("%s", &str);

    printf("Palavra -> %s\n", str);
    return 0;
}