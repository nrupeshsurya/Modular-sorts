#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "interface.h"

int main(int argc, char *argv[])
{
    
    char name[100];
    printf("Enter name of destination file\n");
    scanf("%s",name);
    strcat(name,".txt");

    FILE  *fptr,*fptr1;
    fptr1 = fopen(name,"w");
    fptr = fopen(argv[1],"r");


    int n=10;
    fscanf(fptr,"%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    int k=0;
    while(!feof(fptr))
    {
        fscanf(fptr,"%d",&arr[k]);
        k++;
    }


    if(strcmp(argv[2],"bubblesort")==0)
    {
        bubblesort(n,arr);
    }
    else if(strcmp(argv[2],"selectionsort")==0)
    {
        selectionsort(n,arr);
    }
    else if(strcmp(argv[2],"insertionsort")==0)
    {
        insertionsort(n,arr);
    }
    else if(strcmp(argv[2],"mergesort")==0)
    {
        mergesort(0,n-1,arr,n);
    }
    else if(strcmp(argv[2],"quicksort")==0)
    {
        quicksort(arr,0,n-1);
    }


    for(int i=0;i<n;i++)
    {
        fprintf(fptr1,"%d ",arr[i]);
    }


    printf("\nPlease check the output file\n");
    free(arr);
    fclose(fptr);
    fclose(fptr1);
    return 0;
}