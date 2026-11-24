#include <stdio.h>
int main(){
    float Basic_salary, HRA, TA, DA,Total;
    printf("Enter the Basic Salary");
    scanf("%.2f", &Basic_salary);
    HRA = Basic_salary*(3/100);
    TA = Basic_salary*(5*100);
    DA = Basic_salary*(3/100);
    Total = Basic_salary +HRA+TA+DA;
    printf("Total is %.2f", Total);
    return 0;
}