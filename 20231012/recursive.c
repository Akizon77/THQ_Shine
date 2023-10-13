#include <stdio.h>
int main()
{
    int x;
    int Function(int);
    printf("请输入一个数字:");
    scanf("%d",&x);
    printf("%d",Function(x));
    return 0 ;
}
int Function(int n)
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    if (n > 1)
        return Function(n - 1) + Function(n - 2);
}