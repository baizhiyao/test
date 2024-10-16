# include<stdio.h>
# include<string.h>
// int main()
// {
//     int ch = 0;
//     int ch1[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//     while(ch != 11)
//     {
//         ch++;
//         // printf("%c",ch1[ch]);
//         // printf("\n");
//         putchar(ch1[ch]);
//     }

// }
int mian()
{
    // int year,month,day = 0;
    // scanf("%4d%2d%2d",year,month,day);
    // printf("year = %4d , month = %02d , dey = %02d",year,month,day);
    // return 0;
    int i,j;
    int ret = 1;
    int add = 0;
    for(i = 1;i <= 10;i++)
    {
        for(j = 1;j <= i;j++)
        {
            ret = ret * j;
        }
        add = add + ret;
    }
    printf("%d\n",add);
}