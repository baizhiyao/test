#include<stdio.h>
//#include<windows.h>
#include<stdlib.h>
//冒泡排序
void bubble_sort(int arr[],int sz)
{
    
    for(int i = 0;i < sz;i++)
    {
        for (int j = 0; j < sz-1-i; j++)
        {
            if (j != (sz-1))
            {
                if (arr[j] > arr[j+1])
                {
                    arr[j],arr[j+1] = arr[j+1],arr[j];
                }
            } 
        } 
    } 
}

int main()
{
    int arr[] = {5,6,4,9,8,7,1,2,3};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    printf("%d",arr);
    return 0;
}