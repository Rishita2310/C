// #include <stdio.h>
// int main(){
//     int hf;
//     printf("Enter a number: ");
//     scanf("%d", &hf);
//     printf("Factors of %d are: ", hf);
//     for(int i=1; i<=hf; i++){
//         if(hf%i==0){
//             hf=i;
//             printf("%d ", hf);
//         }
//     }
//     printf("Highest factor of %d is: %d", hf, hf);
//     return 0;
// }


//method-2
#include <stdio.h>
int main(){
    int hf;
    printf("Enter a number: ");
    scanf("%d", &hf);
    printf("Factors of %d are: ", hf);
    for(int i=hf; i>=1; i--){
        if(hf%i==0){
            hf=i;
            break;
        }
    }
    printf("Highest factor is %d : ",hf);
    return 0;
}