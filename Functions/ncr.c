#include <stdio.h>

int ncr(int n, int r){
    
    if(r>n || r<0) return 0;
    if(r==0 || r==n) return 1;
    int ans=1;
    for(int i=1; i<=r; i++){
        ans=ans*(n-i+1)/i;
    }
    return ans;
}

int main(){
    int n, r;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);
    int ans=ncr(n,r);
    printf("The combination of %d and %d is %d.\n", n, r, ans);
    return 0;
}