#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    float PI = 3.14159, * p1, * p2;

    p1 = p2 = &PI;

    printf("По адресу p1=%p хранится *p1=%g\n", (void*)p1, *p1);
    printf("По адресу p2=%p хранится *p2=%g\n", (void*)p2, *p2);

    printf("\nВ шестнадцатеричном формате:\n");
    printf("Адрес p1=%x\n", (unsigned int)(size_t)p1);
    printf("Адрес p2=%x\n", (unsigned int)(size_t)p2);

    return 0;
}
