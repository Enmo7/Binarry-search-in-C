#include <stdio.h>
#include <stdlib.h>

void binarysearch(int arr2[],int item, int len);

int main()
{
    int val;
    int arr[]={-2,7,21,42,66,100,201,203};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Please enter the value to search it : \n");

    scanf("%d", &val);

    binarysearch(arr, val,length);

    return 0;
}

void binarysearch(int arr2[],int item, int len)
{
    int L = 0;
    int M;
    int R = len-1;

    while(L<=R)
    {
        M = (R + L)/2;
        if(item == arr2[M])
        {
            printf("%d Founded at index %d\n", item,M);
            return;
        }
        else if(item > arr2[M])
        {
            L = M+1;
        }
        else if(item < arr2[M])
        {
            R = M-1;
        }
    }
    printf("The value is not in the array.");
}
