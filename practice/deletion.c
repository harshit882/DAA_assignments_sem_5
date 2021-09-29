#include<stdio.h>
void deletion(int arr[],int size,int position,int element)
{
    if(position >= size)
    {
        printf("***Size exceed***");
    }
    for(int i = position; i<=size; i++)
    {
        arr[i] = arr[i+1];
    }
    //arr[position] =element;
    printf("the updated array is :\n");
    for(int i =0; i< size ; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[9];
    int position,element;
    printf("enter the elements of array: \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position where the element to be deleted: \n");
    scanf("%d",& position);
//printf("enter the element to be deleted: \n");
//scanf("%d",& element);
    deletion( arr,5,position,element);
    return 0;
}

