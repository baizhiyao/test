#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void bubble_sort(int arr[],int sz)
{
    
    for(int i = 0;i < sz;i++)
    {
        for (int j = 0; j < sz-1-i; j++)
        {
                if (arr[j] > arr[j+1])
                {
                    // arr[j],arr[j+1] = arr[j+1],arr[j];
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
        } 
    } 
}

int main()
{
//     int i = 0,j = 0;
//     double c = 0;
// //     for (i = 1;i<=100;i++)
// //     {
// //         if((i/10 == 9))
// //         {
// //             j++;
// //         }
// //         if((i%10 == 9))
// //         {
// //             j++;
// //         }
// //     }
// //    printf("%d",j);
//     // for (i = 1;i<=100;i++)
//     // {
//     //     if (i % 2 == 1)
//     //     {
//     //         c = c +(1.0/i);
//     //     }
//     //     else
//     //     {
//     //         c = c -(1.0/i);
//     //     }
//     // }
//     // printf("%1f",c);
//     for (i = 1;i<=9;i++)
//     {
//         for (j = 1;j<=i;j++)
//         {
//             printf("%d X %d = %2d  ",i ,j ,(i*j));
//         }
        
//         printf("\n");
//     }
    int arr[] = {5,6,4,9,8,7,1,2,3};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for (int i = 0; i <= sz-1; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}