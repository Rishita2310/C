#include <stdio.h>
int main(){
    int n;
    printf("enter number of terms : ");
    scanf("%d", &n);

    // //method-1
    // for(int i=1; i<=2*n-1; i+=2){
    //     printf("%d ", i);
    // }

    //method-2
    int a=1;
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        a+=2;
    }
    return 0;
}