#include<stdio.h>
int main()
{
    int i,pos,item,n,a[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the item to insert: ");
    scanf("%d",&item);
    printf("Enter the value of index to insert: ");
    scanf("%d",&pos);
    for(i=n-1; i>=pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=item;
    n=n+1;
    printf("After insertion, the array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}