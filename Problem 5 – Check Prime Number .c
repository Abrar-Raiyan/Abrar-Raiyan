/* Problem 5: Check Prime Number */

#include <stdio.h>
int main(){
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 2) flag = 0;
    for(i = 2; i * i <= n; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    if(flag) printf("%d is a Prime Number\n", n);
    else printf("%d is NOT a Prime Number\n", n);

    return 0;
}
