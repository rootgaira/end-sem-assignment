#include <stdio.h>
int main(){
    int a;
    printf("Enter the value for a: ");
    scanf("%d", &a);
    if ( a%2==0){
        printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}