// 函数
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    int nums[20];
    int poi = 0, zero = 0, neg = 0, i,max,min;
    printf("输入20个整数：");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &nums[i]);
    }
    max = nums[0];
    min = nums[0];
    for (i = 0; i < 20; i++)
    {
        if (nums[i] > 0)
        {
            poi++;
        }
        if (nums[i] == 0)
        {
            zero++;
        }
        if (nums[i] < 0)
        {
            neg++;
        }
        if (max < nums[i])
        {
            max = nums[i];
        }
        if (min > nums[i])
        {
            min = nums[i];
        }
        
        
    }
    printf("正数有%d个\n零有%d个\n负数有%d个\n",poi,zero,neg);
    printf("最大值%d,最小值%d",max,min);
    return 0;
}