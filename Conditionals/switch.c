#include <stdio.h>
int main() {
    int n1;
    printf("Enter 1st number : ");
    scanf("%d", &n1);
    int n2;
    printf("Enter 2nd number : ");  
    scanf("%d", &n2);
    char ch;
    printf("Enter the operator (+, -, *, /) : ");
    scanf(" %c", &ch);
    switch (ch) {
        case '+':
            printf("Result: %d", n1 + n2);
            break;
        case '-':
            printf("Result: %d", n1 - n2);
            break;
        case '*':
            printf("Result: %d", n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("Result: %.2f", (float)n1 / n2);
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid operator!");
    }
    return 0;
}