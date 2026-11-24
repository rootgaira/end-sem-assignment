#include <stdio.h>
int main(){
    int m1,m2,m3,m4,total;
    float percentage;
    printf(" Enter the marks m1 , m2, m3, m4-->");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    total = m1+m2+m3+m4;
    percentage = (total/400)*100;
    if (percentage>=85){
        printf("Grade A");
    }
    else if (percentage>=70){
        printf("Grade B");
    }
    else if (percentage>=55){
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }
    return 0;
}