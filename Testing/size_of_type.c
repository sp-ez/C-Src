#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    doubleType = 5;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %lf bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    

    printf("Value of double is %lf\n", doubleType);
    printf("And size of double is %lf\n", sizeof(double));
    return 0;
}