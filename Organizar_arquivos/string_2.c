#include <stdio.h>

int main(int argc, char *argv[]){
    char *msg = "ATGC";

    char *DNA;

    DNA = "GCGCGC";

    //return 1(one) character
    printf("%c\n", msg[0]);

    //return string
    printf("%s\n", msg);

    //return string
    printf("String_DNA: %s\n", DNA);

    /*return string command line
    ./string_2 ATGCGCGCTA
    ATGCGCGCTA
    */
    printf("%s\n", argv[1]);

    return 0;
}