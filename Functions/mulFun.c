#include <stdio.h>
void ahemdabad(){
    printf("Ahmedabad is a city in Gujarat.\n");
}
void gujarat(){
    printf("Gujarat is a state in western India.\n");
    ahemdabad();
}
void india(){
    printf("India is a country in South Asia.\n");
    gujarat();
}
int main(){
    printf("Welcome to the world of functions!\n");
    india();
    return 0;
}