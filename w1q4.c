#include <stdio.h>

int main()
{
    int x, y;
    int sum, sub, mul, mod;
    float div;
    printf("Enter any two numbers::\n");
    scanf("%d%d", &x, &y, "\n");
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = (float)x / y;
    mod = x % y;
    printf("\n");
    printf("SUM        %d + %d = %d\n", x, y, sum);
    printf("DIFFERENCE %d - %d = %d\n", x, y, sub);
    printf("PRODUCT    %d * %d = %d\n", x, y, mul);
    printf("QUOTIENT   %d / %d = %f\n", x, y, div);
    printf("MODULUS    %d %% %d = %d\n", x, y, mod);
    return 0;
}
