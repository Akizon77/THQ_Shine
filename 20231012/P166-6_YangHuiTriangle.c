#include <stdio.h>
/* 输出以下杨辉三角形（要求输出10行）
 * 1
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 4 1
 * ............
 */
int main()
{
    int numRows = 10;
    int triangle[numRows][numRows];

    // 初始化杨辉三角形的第一列和对角线为1
    for (int i = 0; i < numRows; i++) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
    }

    // 计算杨辉三角形的其他元素
    for (int i = 2; i < numRows; i++) {
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // 输出杨辉三角形
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
