#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    char* pc, c = 'A';
    int* pi, i = 5;
    double* pd, d = 3.14;

    pc = &c;
    pi = &i;
    pd = &d;

    printf("Размер указателя char: %zu байт\n", sizeof(pc));
    printf("Размер указателя int: %zu байт\n", sizeof(pi));
    printf("Размер указателя double: %zu байт\n", sizeof(pd));

    return 0;
}
