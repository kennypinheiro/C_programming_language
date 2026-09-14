#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int input, min = 10, max = 20;
    int rand_num = rand() % (max - min + 1) + min;
    
    printf("Choose a number between 1 and 20\n");
       
    while (input != rand_num){
        scanf("%d", &input);

        if(input > rand_num){
            printf("Too high! Choose a low number\n");
        }
        else if(input < rand_num){
            printf("Too low! Choose a high number\n");
        }
        else{
            printf("Correct answer!\n");
        }
    }

    printf("Random number -> %d\n", rand_num);
    return 0;
}
