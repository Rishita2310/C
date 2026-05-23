// #include<stdio.h>
// int main() {
//     printf("This is how i print text\n");
//     printf("%d",23); // format specifier %d is used to print integers
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     int x; //declaration
//     x=5;  //initialization
//     printf("Sum of squares: %d",x*x);
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     int a=5; // declaration and initialization
//     int b=10;
//     int sum=a+b;
//     printf("Sum of a and b is: %d",sum);
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     int p=2.5;
//     float pi=3.14; // declaration and initialization of a float variable
//     double e=2.71828; // declaration and initialization of a double variable
//     printf("Value of p in integer format: %d\n", p); 
//     printf("Value of p in float format: %f\n", p); 
//     printf("Value of pi: %f\n", pi);
//     printf("Value of e: %lf\n", e);
//     return 0;
// }



//Updation of variables
#include <stdio.h>
int main(){
    int x=5;
    printf("Initial value of x: %d\n", x);
    x=10; // updating the value of x
    printf("Updated value of x: %d\n", x);
    x=x+100;
    printf("Value of x after adding 100: %d\n", x);
    x=x-105;
    printf("Value of x after subtracting 105: %d\n", x);
    x=x*2;
    printf("Value of x after multiplying by 2: %d\n", x);
    x=x/2;
    printf("Value of x after dividing by 2: %d\n", x);
    return 0;
}
