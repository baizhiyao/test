# include<stdio.h>
# include<string.h>
typedef unsigned int uint_32; // 类型定义，可以理解为类型重命名
//register int qwe = 1;
#define ADD(x,y) ((x)+(y))
int main()
{
    // char arr1[] = "abcdef";
    // char arr2[] = {'a','b','c','d','\0'};
    // int len = strlen(arr1);
    // printf("%d\n",len);
    // %d - 打印整形
    // %c - 打印字符
    // %s - 打印字符串
    // %f - 打印float类型的数据
    // %lf - 打印double类型的数据
    // 三目操作符
    
    static int a=20,b=10;// static 可以修饰函数、局部变量和全局变量
    // 修饰局部变量，局部变量变为全局变量
    // 修饰全局变量，改变变量的外部链接属性
    // 修饰函数，与修饰全局变量类似
    int r = (a>b?a:b);
    int c = ADD(a,b);
    int* p = &a;
    
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",c);
    printf("abcd\n");
    return 0;
}