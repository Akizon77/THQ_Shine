// 1.输入一个8X8的二维整型数组，统计并输出其中零、正数和负数的个数。
#include <stdio.h>
int main()
{
    int a[8][8];
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            scanf("%d", a[i][j]);
        }
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j] > 0)
            {
                x++;
            }
            else if (a[i][j] < 0)
            {
                y++;
            }
            else
            {
                z++;
            }
        }

    printf("正数：%d\n 负数:%d\n零值：%d\n", x, y, z);
    return 0;
}
