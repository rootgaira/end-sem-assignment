#include <stdio.h>

int main (){
    float C,F;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &C);
    F = (9*C)/5 +32;
    printf("Temprature in Fahrenheit: %f\n",F);
    return 0;
}