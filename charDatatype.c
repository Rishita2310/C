#include <stdio.h>
int main() {
    char letter = 'A';
    printf("The character is: %c\n", letter); //implicit
    int ascii=(int)letter; //explicit
    printf("The ASCII value of %c is: %d\n", letter, ascii);
    int x=36;
    char y=(char)x; //explicit
    printf("The character corresponding to ASCII value %d is: %c\n", x, y);
    return 0;
}