#include<stdio.h>
void ins_sort(int[],int);
int main()
{
    int size,i,a[10];
    printf("Enter the size of array: \n ");
    scanf("%d",& size);
    printf("Enter %d elements: \n", size);
    for (i=0; i<size; i++)
    {
    scanf("%d",&a[i]);
    }
    ins_sort(a,size);
    printf("The sorted array is: \n");
    for (i=0; i<size; i++)
    {
    printf("%d\t",a[i]);
    }
    return 0;
}
void ins_sort (int a[], int n)
{
    int i,j,key;
    for(i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;
    while (j>=0 && key<a[j])
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
}