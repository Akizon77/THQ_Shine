#include <stdio.h>
//输入一个小数，输出他的小数部分
int main()
{
    float input,result;
    float FindTheFractionalPart(float);
    printf("请输入一个小数：");
    scanf("%f",&input);
    result = FindTheFractionalPart(input);
    printf("\n这个数的小数部分是：%f",result);
    return 0;
}
float FindTheFractionalPart(float origin)
{
    return origin - (int)origin;
}