// 函数
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    float x, y;
    float z = sin(10 * PI / 180.0 );
    printf("输入X的值");
    scanf("%f", &x);
    if (x < 0)
        y = fabs(x) + sin(10);
    else if (x < 4 && x >= 0)
        y = pow(x, 2) + pow(x, 0.5);
    else if (x >= 4)
        y = 1.0 / 4.0 * x + 17;
    printf("%f", y);
    return 0;
}