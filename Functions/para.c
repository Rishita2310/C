#include <stdio.h>
void evenOdd(int num){
    if(num%2==0){
        printf("%d is even.\n", num);
    }
    else{
        printf("%d is odd.\n", num);
    }
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    evenOdd(number);
    return 0;
}