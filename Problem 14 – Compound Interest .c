#include <stdio.h>
#include <math.h>
int main(){
    float p, r, t, ci;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    ci = p * pow((1 + r/100), t) - p;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
