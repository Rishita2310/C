// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int min = i < j ? i : j;
            min = min < n - i + 1 ? min : n - i + 1;
            min = min < n - j + 1 ? min : n - j + 1;
            printf("%d ", min);
        }
        printf("\n");
    }
    return 0;
}