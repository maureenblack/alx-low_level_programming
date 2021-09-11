#include<stdio.h>
int main(void)
 {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte\n", sizeof(charType));
    printf("Size of an int: %zu bytes\n", sizeof(intType));
    printf("Size of a long int: %zu bytes\n", sizeof(doubleType));
    printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
    printf("Size of a float: %zu bytes\n", sizeof(floatType));
 
   return 0;
}

