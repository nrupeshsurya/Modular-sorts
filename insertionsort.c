void insertionsort(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0&&arr[j]<arr[j-1])
        {
            int t = arr[j];
            arr[j]= arr[j-1];
            arr[j-1]=t;
            j--;
        }
    }
}