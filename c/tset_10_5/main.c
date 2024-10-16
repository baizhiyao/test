# include<stdio.h>
#define MAX 100//define定义的是标识符常量
enum Color
{
    //枚举常量
    RED,
    GREEN,
    BLUE
};

int main()
{
    // printf("hello world\n");
    // printf("he he\n");
    const int a = 10; //const修饰的变量会变成常变量
    enum Color c = RED;
    scanf("");//输入
    printf("%zu\n",sizeof(char));
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(short));
    printf("%zu\n",sizeof(long));
    printf("%zu\n",sizeof(long long));
    printf("%zu\n",sizeof(double));
    return 0;
}