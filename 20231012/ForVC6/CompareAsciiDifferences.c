#include <stdio.h>
// �Ӽ������������ַ��������бȽϣ����Ϊ���ַ����е�һ����ͬ��ĸ��ASCII��ֵ֮�
int main()
{
    char str1[1024], str2[1024];
    int difference = 0, i = 0;
    int CompareAsciiDifferences(char *, char *);
    printf("�������һ���ַ���:");
    gets(str1);
    printf("������ڶ����ַ���:");
    gets(str2);
    difference = CompareAsciiDifferences(str1, str2);
    printf("���ַ����е�һ����ͬ��ĸ��ASCII��ֵ֮��Ϊ:%d", difference);
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