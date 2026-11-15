#include <stdio.h>
#include <stddef.h>

int main() {
    char a[2];
    short int b[2];
    unsigned short int c[2];
    int d[2];
    unsigned char e[2];
    wchar_t f[2];
    long long int g[2];
    size_t h[2];
    float i[2];
    double j[2];
    signed int k[2];

    printf("1. char: %d байт\n",
        (int)((char*)&a[1] - (char*)&a[0]));
    printf("2. short int: %d байт\n",
        (int)((char*)&b[1] - (char*)&b[0]));
    printf("3. unsigned short int: %d байт\n",
        (int)((char*)&c[1] - (char*)&c[0]));
    printf("4. int: %d байт\n",
        (int)((char*)&d[1] - (char*)&d[0]));
    printf("5. unsigned char: %d байт\n",
        (int)((char*)&e[1] - (char*)&e[0]));
    printf("6. wchar_t: %d байт\n",
        (int)((char*)&f[1] - (char*)&f[0]));
    printf("7. long long int: %d байт\n",
        (int)((char*)&g[1] - (char*)&g[0]));
    printf("8. size_t: %d байт\n",
        (int)((char*)&h[1] - (char*)&h[0]));
    printf("9. float: %d байт\n",
        (int)((char*)&i[1] - (char*)&i[0]));
    printf("10. double: %d байт\n",
        (int)((char*)&j[1] - (char*)&j[0]));
    printf("11. signed int: %d байт\n",
        (int)((char*)&k[1] - (char*)&k[0]));
    return 0;
}