#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n;
        printf("eneter number of elements : ");
        scanf("%d",&n);
        int avg = 0;
        int arr[n];
        printf("enter the elements : ");
        for(int i=0;i<n;i++){

            scanf("%d",&arr[i]);
            avg = avg + arr[i];
        };
        avg = avg/n;
        printf("Average :%d",avg);
        printf("\n elements are : ");

        for(int i=0;i<n;i++){

            printf("%d ",arr[i]);

        }





}
