#include <stdio.h>

enum numbers{
    a = 5, b = 17, c
};

int main(void){

enum numbers v1 = a;
enum numbers v2 = b;
enum numbers v3 = c;

printf("%d | %d | %d \n", v1,v2,v3);
printf("%d | %d | %d \n", a,b,c);

return 0;

}