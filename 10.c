#include <stdio.h>
int main(){
    int y;
    printf("Enter the year");
    scanf("%d", &y);

    if(y%400 == 0){
        printf("Leap Year");
    }
    else if (y%100==0)
    {
        printf("Not a leap year");
    }
    else if (y%4==0)
    {
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;  
    
}