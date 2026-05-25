#include <stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    //print even numbers from 0 to n

    // method-1
    // for(int i=0; i<=n; i++){
    //     if(i%2==0){
    //         printf("%d ", i);
    //     }
    // }

    //method-2
    // for(int i=0; i<=n; i+=2){
    //     printf("%d ", i);
    // }


    //table of 19
    for(int i=1; i<=10; i++){
        printf("19 x %d = %d\n", i, 19*i);
    }

    return 0;
}