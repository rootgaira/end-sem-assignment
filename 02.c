
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, SI, CI, A;

    printf("Enter the Principal amount: ");
    scanf("%f", &p);

    printf("Enter the ROI: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;

    A = p * pow((100 + r) / 100, t);
    CI = A - p;

    printf("The SI is %.2f and CI is %.2f\n", SI, CI);

    return 0;
}
