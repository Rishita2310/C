#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);


    // //if statement
    // if(x > 0){
    //     printf("The number is positive.");
    // }
    // if(x < 0){
    //     printf("The number is negative.");
    // }



    // // if-else statement
    // if(x%2 == 0){
    //     printf("The number is even.");
    // }
    // else{
    //     printf("The number is odd.");
    // }



    // //absolute value using if-else statement
    // if(x < 0){
    //     x = -x;
    // }   
    // else{
    //     x = x;
    // }
    // printf("The absolute value is: %d", x);



    // if-else-if statement
    if (x > 0){
        printf("The number is positive.");
    }
    else if(x < 0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }



    // // check if int or not
    // float f;
    // printf("Enter a real number: ");
    // scanf("%f", &f);
    // int i = (int)f;
    // if (f == i){
    //     printf("The number is an integer.");
    // }
    // else{
    //     printf("The number is not an integer.");
    // }



    // // profit loss
    // int cp;
    // printf("Enter the cost price: ");
    // scanf("%d", &cp);
    // int sp;
    // printf("Enter the selling price: ");
    // scanf("%d", &sp);
    // if(sp > cp){
    //     printf("Profit: %d", sp - cp);
    // }
    // else if(sp < cp){
    //     printf("Loss: %d", cp - sp);
    // }
    // else{
    //     printf("No profit no loss.");
    // }



    // largest of three distinct numbers
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("The largest number is: %d", a);
    }
    else if(b > a && b > c){
        printf("The largest number is: %d", b);
    }
    else{
        printf("The largest number is: %d", c);
    }
    return 0;
}