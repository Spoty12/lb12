
#include <stdio.h>
#include <locale.h>

void print_bytes(void* ptr, size_t size)
{
    unsigned char* p = (unsigned char*)ptr;

    for (size_t i = 0; i < size; i++)
    {
        printf("%02X ", p[i]);
    }

    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "RUS");

    int a = 12345;
    float b = 12345.0f;
    double c = 12345.0;

    int test = 1;
    unsigned char* p = (unsigned char*)&test;

    printf("Определение порядка байтов:\n");

    if (p[0] == 1)
        printf("Система Little-endian\n");
    else
        printf("Система Big-endian\n");

    printf("\nПобайтовое представление переменных:\n");

    printf("\nТип int (12345):\n");
    print_bytes(&a, sizeof(a));

    printf("\nТип float (12345.0):\n");
    print_bytes(&b, sizeof(b));

    printf("\nТип double (12345.0):\n");
    print_bytes(&c, sizeof(c));

    return 0;
}
