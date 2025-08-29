#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum = 0, rem, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if(sum == n) printf("%d is Armstrong Number\n", n);
    else printf("%d is Not Armstrong Number\n", n);
    return 0;
}
