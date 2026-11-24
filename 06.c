#include <stdio.h>
int main(){
    int a ,b,c;
    printf("Enter the value for a,b,c");
    scanf("%d %d %d", &a,&b,&c);
    int largest = a;
    if (b>largest){
        largest=b;
    }
    if (c> largest){
        largest=c;
    }
    printf("Largest = %d", largest);
    return 0;
}