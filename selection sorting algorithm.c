#include<stdio.h>

/* sorting a given array of integers in ascending order using selection sort algorithm. */

int main()
{
    int n,temp,Min;
        scanf("%d",&n);     /* taking the size of array from user. */
        int arr[n];         /* declaring an array of size n. */
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);    /* taking input from user. */

        /* applying selection sorting algorithm. */

        for(int i=0;i<n-1;i++)          /* selecting the index of smallest number. */
            {
                Min=i;
                for(int j=i+1;j<n;j++)
            {
                    if(arr[Min]>arr[j])
                        Min=j;
            }
            if(i!=Min)              /* swapping the elements of array */
            {
                temp=arr[i];
                arr[i]=arr[Min];
                arr[Min]=temp;

            }
            }


    for(int i=0;i<n;i++)    /* printing the sorted array */
                printf("%d ",arr[i]);

    return 0;
}

