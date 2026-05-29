#include <stdio.h>
int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int minimum = min(num1, num2);
    printf("The minimum of %d and %d is %d.\n", num1, num2, minimum);
    return 0;
}