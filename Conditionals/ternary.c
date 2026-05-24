#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F';
    
    printf("Grade: %c", grade);
    
    return 0;
}