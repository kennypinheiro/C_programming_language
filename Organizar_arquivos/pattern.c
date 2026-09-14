#include <stdio.h>
//Pattern -> Increasing triangle: @mol3cul4RNA =)
int main(void){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}