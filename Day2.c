#include <stdio.h>
#define MAX_SIZE 100      
int main()
{
    int arr[MAX_SIZE];
    int size, i;
    printf("Enter the Array Size:");
    scanf("%d", &size);
    printf("Enter the Array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    } 
    printf("Reverse Array:");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}