// 函数
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    float x, y;
    printf("输入X的值:");
    scanf("%f", &x);
    if (x < 0)
    {
        y = fabs(x + 5);
    }
    else if (x < 5 && x >= 0)
    {
        y = pow(x + 1, 0.5) + sin(23 * PI / 180);
    }
    else if (x >= 5)
    {
        y = 1.0 / 3.0 * (x - 4) + pow(x, 0.3);
    }
    printf("%f",y);
    return 0;
}