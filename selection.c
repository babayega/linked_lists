#include<stdio.h>


void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

void selection(int arr[], int n)
{
    
    int i,min,j,temp;
    for(i=0;i<n-1;++i)
    {
        min=i;
        for(j=i+1;j<n;++j)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        swap(&arr[i],&arr[min]);
    }
}

void bubble(int arr[], int n)
{
    int i,j,flag,temp;
    for(i=0;i<n-1;++i)
    {
        flag=0;
        for(j=0;j<n-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

void insertion(int arr[], int n)
{
    int i,j,hole,value;
    for(i=1;i<n;++i)
    {
        value = arr[i];
        hole = i;
        while(hole>0 && value<arr[hole-1])
        {
            arr[hole]=arr[hole-1];
            --hole;
        }
        arr[hole]=value;
        
    }
}


int partition(int a[], int lo, int hi)
{
    int pivot=a[hi];
    int i=lo,j,temp;
    for(j=lo;j<hi;++j)
    {
        if(a[j]<pivot)
        {
            swap(&a[i],&a[j]);
            ++i;
        }
    }
    swap(&a[hi],&a[i]);
    return i;
}


void quicksort(int a[], int lo, int hi)
{
    if(lo<hi)
    {
        int p = partition(a,lo,hi);
        quicksort(a,lo,p-1);
        quicksort(a,p+1,hi);
        
    }
}


void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1],R[n2];
    
    for(i=0;i<n1;++i)
        L[i] = arr[l+i];
    for(j=0;j<n2;++j)
        R[j] = arr[m+1+j];

    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k] = L[i];
            ++i;
        }
        else
        {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        ++i;
        ++k;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        ++j;
        ++k;
    }
}

void mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[]={99,5,2,7,100,9,4},i;
    mergesort(arr,0,6);
    for(i=0;i<7;++i)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
    
}
