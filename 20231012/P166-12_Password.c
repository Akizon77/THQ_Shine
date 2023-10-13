#include <stdio.h>
/* 有一行电文，已按以下规律翻译成密码
 * A -> Z   a -> z
 * B -> Y   b -> y
 * C -> X   c -> x
 * ...      ...
 * 即第一个字母变成第26个字母，第i个字母变成第26-i+1个字母，非字母字符不变。
 * 要求程序将密码译回原文，并输出密码和原文。
 */
int main()
{
    char input[1024];
    char *ptr = input;
    printf("请输入密码：");
    gets(input);
    printf("原文是：");
    puts(input);
    printf("密码是：");
    for (ptr = input; *ptr != '\0'; ptr++)
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = 25 - *ptr + 'A' * 2;
        }
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = 25 - *ptr + 'a' * 2;
        }
    }
    puts(input);
    return 0;
}