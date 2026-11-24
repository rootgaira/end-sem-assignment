#include<stdio.h>
int main(){
    int q;
    float bill, net;
    printf("Enter the quantity-->");
    scanf("%d", &q);
    bill = q*5;
    if (bill > 500){
        net = bill - (bill*0.1);
    }
    else{
        net = bill;
    }
    printf("%.2f", net);
    return 0;
}