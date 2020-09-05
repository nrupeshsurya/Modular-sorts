#include<stdio.h>
void merge(int arr[],int l, int mid, int r, int n)
{
    int i=l;
    int j=mid+1;
    int k=l;
    // printf("%d %d %d \n",l,mid,r);
    int arr1[1000];
    for(int p=0;p<n;p++)
    {
        arr1[p]=arr[p];
    }
    while(i<=mid&&j<=r)
    {
        if(arr[i]<=arr[j])
        {
            arr1[k]=arr[i];
            i++,k++;
        }
        else
        {
            arr1[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid)
    {
        arr1[k]=arr[i];
        i++,k++;
    }
    while(j<=r)
    {
        arr1[k]=arr[j];
        j++,k++;
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }
}

void mergesort(int l, int r, int arr[], int n)
{
    if(l<r)
    {
        int mid = l+(r-l)/2;
        mergesort(l,mid,arr,n);
        mergesort(mid+1,r,arr,n);
        merge(arr,l,mid,r,n);
    }
}