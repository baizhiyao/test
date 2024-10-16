#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void menu()
{
    printf("***********************\n");
    printf("********1.play*********\n");
    printf("********0.exit*********\n");
    printf("***********************\n");
}
void game()
{
    int ret = rand()%100+1;//取余100，会限定范围为0~99，加1变为0~100;
    int a = 0;
    printf("猜数字游戏开始请输入->");
    while(1)
    {
        printf("\n请输入->");
        scanf("%d",&a);
        if ( a < ret )
        {
            printf("输入数字小了");
        }
        else if ( a > ret )
        {
            printf("输入数字大了");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}


int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入->");
        scanf("%d",&input);
        if ( input == 1 )
        {
            game();
        }
        else if ( input == 0 )
        {
            printf("正在退出");
            break;
        }
        else
        {
            printf("请重新输入");
        }
    } while (input);
    
    return 0;
}