#include <stdio.h>
#include <stdlib.h>

#define MEMALLOC(ptr, size) { \
    ptr = malloc(size); \
    if(ptr == NULL){ \
        fprintf(stderr, "Allocated memory error\n"); \
        exit(1); \
    } \
} \

void *malloc_s(size_t size){
    void *ptr;
    ptr = malloc(size);
    if(ptr ==NULL){
        fprintf(stderr, "Allocated memory error\n");
        exit(1);
    }
    else{
        return ptr;
    }
}

int main(int argc, char *argv[]){
    int *p;
    //p = malloc(sizeof(int));
    p = malloc_s(4); 
    *p = 17;

    printf("%d\n", *p);
    printf("%p\n", &p);
    free(p);
    return 0;
}