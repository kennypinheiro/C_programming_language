#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)
#define DEBUG
Descomentar a linha abaixo: MACROS ñ funcionam. 
//#undef DEBUG

int main(int argc, char *argv[]){
    int a;
    a = MAX(3,7);
    printf("%d\n", a);

#ifdef DEBUG
    printf("debug line -> %d | %s\n", __LINE__, __DATE__);
    printf("time: %s\n", __TIME__);
#endif
    return 0;
}