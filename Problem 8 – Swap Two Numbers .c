#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d\n", a, b);
    return 0;
}
