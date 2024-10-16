#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void numprint(unsigned int p)
{
    unsigned int a = p%10;
    if (p/10 != 0)
    {
        numprint(p/10);
    } 
    printf("%u  ",a);
}
int main()
{
    unsigned int num = 0;
    scanf("%u",&num);
    numprint(num);
}