#include <stdio.h>
int main(){
    int N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    if (N>0){
        printf("Positive");
    }
    else if(N<0){
        printf("Negative");
    }
    else{
        printf("0");
    }
    return 0;
}