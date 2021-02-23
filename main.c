#include <stdio.h>

int adderFunc(int, int);

int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    printf("\n Sum: %i", adderFunc(a, b));
    return 0;
}

int adderFunc(int a, int b)
{
    return a+b;
}
