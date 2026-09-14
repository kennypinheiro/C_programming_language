#include <stdio.h>
void show_vector(int *vet, int n){
    for(int i=0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void sort_vector(int *vet, int n){
    for(int i = 1; i < n; i++){
        tmp = vet[i];
        j = i - 1;

        while(j >= 0 && vet[j] > tmp){
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = tmp;
    }
}


int main(int argc, char *argv[]){
    int arr_1[6] = {5 , 2 , 4 , 6 , 1 , 3};
    int arr_2[8] = {4, 3, 2, 5, 7, 9, 24, 12};

    show_vector(arr, 8);
    return 0;
}