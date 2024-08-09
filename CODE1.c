#include<stdio.h>

int main()
{
    int a[100],i,n;
    printf("Enter the size for array:");
    scanf("%d",&n);
    printf("Enter the values for  array : \n ");
    for (i=0; i<n; i++)
    {
    scanf("%d",&a[i]);    
    }
    printf("The elements of array is : \n ");
    for (i=0; i<n; i++)
    {
    printf("%d \t ",a[i]);
    }
    return 0;

}
