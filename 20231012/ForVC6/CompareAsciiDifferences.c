#include <stdio.h>
// 从键盘输入两个字符串，进行比较，结果为两字符串中第一个不同字母的ASCII码值之差。
int main()
{
    char str1[1024], str2[1024];
    int difference = 0, i = 0;
    int CompareAsciiDifferences(char *, char *);
    printf("请输入第一个字符串:");
    gets(str1);
    printf("请输入第二个字符串:");
    gets(str2);
    difference = CompareAsciiDifferences(str1, str2);
    printf("两字符串中第一个不同字母的ASCII码值之差为:%d", difference);
    return 0;
}
int CompareAsciiDifferences(char *str1, char *str2)
{
    int i;
    for (i = 0; i < 1024; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Find difference at index %d,valueA is '%c',valueB is '%c'\n", i + 1, str1[i], str2[i]);
            return str1[i] - str2[i];
        }
    }
}