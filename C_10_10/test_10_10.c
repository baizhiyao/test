#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    // int i,j;
    // int ret = 1;
    // int add = 0;
    // for(i = 1;i <= 10;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         ret = ret * j;
    //     }
    //     add = add + ret;
    // }
    // printf("%d\n",add);
    
    // while(1)
    // {
    //     int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,18,19,20,21,22,23};
    //     int sz = sizeof(arr) / sizeof(arr[0]);
    //     int left = 0 ,right = sz - 1;
    //     int k = 0;
    //     scanf("%d",&k);
    //     while(1)
    //     {
    //         int mid = (left + right) / 2;
    //         if (arr[mid] < k )
    //         {
    //             left = mid + 1;
    //         }
    //         else if (arr[mid] > k )
    //         {
    //             right = mid - 1;
    //         }
    //         else
    //         {
    //             printf("找到了，下标为%d\n",mid);
    //             break;
    //         }
    //     }
    // }
    char arr1[] = "welcome to bit!!!!";
    char arr2[] = "##################";
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    int left = 0 ,right = sz - 2;
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf(arr2);
        printf("\n");
        Sleep(1000);
        system("cls");
        left ++;
        right --;
    }
    
    
}