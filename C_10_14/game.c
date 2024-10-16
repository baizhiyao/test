
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

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