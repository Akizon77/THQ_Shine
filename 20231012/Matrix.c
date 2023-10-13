#include <stdio.h>
// 已知A是一个2X3的矩阵，B是一个3X5的矩阵，编程求AxB得到的新矩阵C，并输出C矩阵
int main()
{
    float MatrixA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    float MatrixB[3][5] = {{7, 8, 9, 10, 11}, {12, 13, 14, 15, 16}, {17, 18, 19, 20, 21}};
    float MatrixC[2][5];
    int i,j,k;

    // 计算矩阵乘法 AxB
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            MatrixC[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                MatrixC[i][j] += MatrixA[i][k] * MatrixB[k][j];
            }
        }
    }

    // 输出矩阵C
    printf("矩阵C：\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%.f ", MatrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}