#include <stdio.h>

int main(void) {
    printf("Size of char: %ld byte(s)\n", sizeof(char));
    printf("Size of int: %ld byte(s)\n", sizeof(int));
    printf("Size of long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of float: %ld byte(s)\n", sizeof(float));
    printf("Size of double: %ld byte(s)\n", sizeof(double));
    printf("Size of long double: %ld byte(s)\n", sizeof(long double));

    return 0;
}

timeout 30 bash -c 'gcc -o size32 -m32 -std=gnu89  6-size.c'
