#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
    again:
    printf("你的电脑将在60s内关机，请输入T取消->");
    scanf("%s",input);
    if ( strcmp(input,"T") == 0 )// strcmp比较字符串是否相等
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
}
