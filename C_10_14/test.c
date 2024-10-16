
#include"game.h"
void Initarr(char arr[ROW][COL],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = ' ';
        }
        
    }
    
}

void Diaplayarr(char arr[ROW][COL],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %c ",arr[i][j]);
            if(j<(col-1))
            {
                printf("|");
            }
        }
        printf("\n");
        if (i<(row-1))
        {
           for(int j = 0; j < col; j++)
            {
                printf("---");
                if(j<(col-1))
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayerMove(char arr[ROW][COL],int row ,int col)
{
    int a = 0,b = 0;
    printf("玩家下棋\n");
    while (1)
    {
        printf("请输入坐标->");
        scanf("%d %d",&a,&b);
        if ((a>0) && (a<=row) && (b>0) && (b<=col))
        {
            if (arr[a-1][b-1] == ' ')
            {
                arr[a-1][b-1] = '*';
                break;
            }
            else
            {
                printf("坐标被占用，请重新输入");
            }   
        }
        else
        {
            printf("输入非法坐标，请重新输入");
        }
    }
}

void ComputerMove(char arr[ROW][COL],int row ,int col)
{
    int a = 0,b = 0;
    printf("电脑下棋\n");
    while (1)
    {
        a = rand() % row;
        b = rand() % col;
        if (arr[a][b] == ' ')
        {
            arr[a][b] = '#';
            break;
        }   
    }
}

char Decide(char arr[ROW][COL],int row,int col,int times)
{
    int x = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != ' ')
            {
                x++;
                int h = 0,s = 0,left = 0,right = 0;
                for (int k = 0; k < times; k++)
                {
                    if (arr[i][j] == arr[i+k][j]) s++;
                    
                    if (arr[i][j] == arr[i][j+k]) h++;
                    
                    if (arr[i][j] == arr[i+k][j+k]) left++;
                    
                    if (arr[i][j] == arr[i-k][j-k]) right++;
                    
                }
                if (s == times || h == times || left == times || right == times)
                {
                    if (arr[i][j] == '*')
                    {
                        return '*';
                        goto end;
                    }
                    else
                    {
                        return '#';
                        goto end;
                    }
                }
            }
        }   
    }
    if (x == (row * col))
    {
        return 'Q';
    }
    else
    {
        return 'C';
    }
    end:;

}
void menu()
{
    printf("***********************\n");
    printf("********1.play*********\n");
    printf("********0.exit*********\n");
    printf("***********************\n");
}
void game()
{
    char arr[ROW][COL] = {0};
    int times = 5;
    char ret = 0;
    //初始化棋盘
    Initarr(arr,ROW,COL);
    printf("三子棋游戏开始->\n");
    while(1)
    {
        Diaplayarr(arr,ROW,COL);
        printf("----------------------------------------\n");
        PlayerMove(arr,ROW,COL);
        Diaplayarr(arr,ROW,COL);
        printf("----------------------------------------\n");
        ret = Decide(arr,ROW,COL,times);
        if (ret == '*') 
        {
            printf("玩家胜\n");
            break;
        }
        else if (ret == '#') 
        {
            printf("电脑胜\n");
            break;
        }
        else if (ret == 'Q') 
        {
            printf("平局，是否重新开始(Y/N)");
            char s = 0;
            again:
            scanf("%c",&s);
            if (s == 'Y')
            {
                Initarr(arr,ROW,COL);
                continue;
            }
            else if (s == 'N')
            {
                break;
            }
            else
            {
                printf("未合法输入，请重新输入\n");
                goto again;
            }
        }
        ComputerMove(arr,ROW,COL);
        Diaplayarr(arr,ROW,COL);
        printf("----------------------------------------\n");
        ret = Decide(arr,ROW,COL,times);
        if (ret == '*') 
        {
            printf("玩家胜");
            break;
        }
        else if (ret == '#') 
        {
            printf("电脑胜");
            break;
        }
        else if (ret == 'Q') 
        {
            printf("平局");
            Initarr(arr,ROW,COL);
            continue;
            
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
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