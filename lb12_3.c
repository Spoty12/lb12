
#include <stdio.h>
#include <locale.h>
#include <stddef.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    // Тип int
    int a[3] = { 5, 10, 15 };
    int* pa = &a[1];

    printf("Тип int:\n");
    printf("Адрес: %p, значение: %d\n", (void*)pa, *pa);
    pa++;
    printf("После ++: %p, значение: %d\n", (void*)pa, *pa);
    pa--;
    printf("После --: %p, значение: %d\n\n", (void*)pa, *pa);

    // Тип double
    double b[3] = { 1.5, 2.5, 3.5 };
    double* pb = &b[1];

    printf("Тип double:\n");
    printf("Адрес: %p, значение: %g\n", (void*)pb, *pb);
    pb++;
    printf("После ++: %p, значение: %g\n", (void*)pb, *pb);
    pb--;
    printf("После --: %p, значение: %g\n\n", (void*)pb, *pb);

    // Тип char
    char c[3] = { 'A', 'B', 'C' };
    char* pc = &c[1];

    printf("Тип char:\n");
    printf("Адрес: %p, значение: %c\n", (void*)pc, *pc);
    pc++;
    printf("После ++: %p, значение: %c\n", (void*)pc, *pc);
    pc--;
    printf("После --: %p, значение: %c\n\n", (void*)pc, *pc);

    // Тип long double
    long double d[3] = { 1.1L, 2.2L, 3.3L };
    long double* pd = &d[1];

    printf("Тип long double:\n");
    printf("Адрес: %p, значение: %Lg\n", (void*)pd, *pd);
    pd++;
    printf("После ++: %p, значение: %Lg\n", (void*)pd, *pd);
    pd--;
    printf("После --: %p, значение: %Lg\n\n", (void*)pd, *pd);

    // Тип unsigned short int
    unsigned short int e[3] = { 10, 20, 30 };
    unsigned short int* pe = &e[1];

    printf("Тип unsigned short int:\n");
    printf("Адрес: %p, значение: %hu\n", (void*)pe, *pe);
    pe++;
    printf("После ++: %p, значение: %hu\n", (void*)pe, *pe);
    pe--;
    printf("После --: %p, значение: %hu\n\n", (void*)pe, *pe);

    // Тип _Bool
    _Bool f[3] = { 0, 1, 1 };
    _Bool* pf = &f[1];

    printf("Тип _Bool:\n");
    printf("Адрес: %p, значение: %d\n", (void*)pf, *pf);
    pf++;
    printf("После ++: %p, значение: %d\n", (void*)pf, *pf);
    pf--;
    printf("После --: %p, значение: %d\n", (void*)pf, *pf);

    return 0;
}
