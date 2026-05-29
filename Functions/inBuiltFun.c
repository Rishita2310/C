#include <stdio.h>
#include <math.h>

int main(){
    printf("The square root of 16 is %d.\n", sqrt(16));
    printf("The cube root of 27 is %d.\n", cbrt(27));

    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("The power of %d raised to %d is %d.\n", a, b, pow(a, b));
    printf("The combination of %d and %d is %d.\n", a, b, ncr(a, b));
    return 0;
}