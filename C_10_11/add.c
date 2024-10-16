#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void add(int* p)
{
    (*p)++;
}
int main()
{
    int num = 0;
    while(1)
    {
        add(&num);
        Sleep(100);
        printf("%d\n",num);
    }
    return 0;
}