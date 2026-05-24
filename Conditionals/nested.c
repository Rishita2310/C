#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x%5==0){
        if(x%10==0){
            printf("The number is divisible by 10.");
        }
        else{
            printf("The number is divisible by 5 but not by 10.");
        }
    }
    else{
        printf("The number is not divisible by 5.");
    }
    return 0;
}