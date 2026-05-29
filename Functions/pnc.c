#include <stdio.h>

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

int ncr(int n, int r){
    return fact(n) / (fact(r) * fact(n-r));
}

int main(){
    int n, r;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    return 0;
}