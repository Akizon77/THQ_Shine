#include <stdio.h>
// 用函数求和
int main()
{
    float x, y, z;
    float add(float, float);
    printf("请输入两个实数:");
    scanf("%f,%f", &x, &y);
    z = add(x,y);
    printf("Sum is %f",z);
    return 0;
}
float add(float a, float b)
{
    return a + b;
}