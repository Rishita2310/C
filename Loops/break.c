#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\nLoop exited at i = %d\n", i);
    return 0;
}