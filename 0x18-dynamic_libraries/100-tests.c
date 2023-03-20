#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "100-operations.h"

int main(void)
{
    int a;
    int b;

    srand(time(0));
    a = rand() % 223 - 111;
    b = rand() % 223 - 111;

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, div(a,b));
    printf("%d %% %d = %d\n", a,b , mod(a,b));

    return (0);
}
