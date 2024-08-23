#include<stdio.h>
int partition(int a[],int start,int end)
{
    int i,j,temp,p;
    p=a[end];
    i=start;
    j=i-1;
    for(i=start;i<end;i++)
    {
        if(a[i]<p)
        {
            j++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j+1];
    a[j+1]=a[end];
    a[end]=temp;
    return j+1;
}
void qsort(int a[],int start,int end)
{
    int pivot;
    if(start<end)
    {
        pivot=partition(a,start,end);
        qsort(a,start,pivot-1);
        qsort(a,pivot+1,end);
    }
}
int main()
{
    int a[100],n,i,start,end;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    start=0;
    end=n-1;
    qsort(a,start,end);
    printf("\nThe elements after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}