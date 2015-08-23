#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int *arr = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        arr[i]=i;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    
    getchar();
    return 0;
}
