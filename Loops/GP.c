#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a=1; // First term of the geometric progression
    int r=2; // Common ratio
    int term = a;

    printf("Geometric Progression: ");
    for(int i=0; i<n; i++){
        printf("%d ", term);
        term *= r;
    }
    return 0;
}