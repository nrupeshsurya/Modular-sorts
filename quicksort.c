
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int p = l;
    for(int i=l;i<r;i++)
    {
        if(arr[i]<=pivot)
        {
            int t = arr[i];
            arr[i]=arr[p];
            arr[p]=t;
            p++;
        }
    }
    arr[r]=arr[p];
    arr[p]=pivot;
    return p;
}


void quicksort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pindex = partition(arr,l,r);
        quicksort(arr,l,pindex-1);
        quicksort(arr,pindex+1,r);
    }
}