#include <stdio.h>
//����һ��С�����������С������
int main()
{
    float input,result;
    float FindTheFractionalPart(float);
    printf("������һ��С����");
    scanf("%f",&input);
    result = FindTheFractionalPart(input);
    printf("\n�������С�������ǣ�%f",result);
    return 0;
}
float FindTheFractionalPart(float origin)
{
    return origin - (int)origin;
}