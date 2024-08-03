#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],i,n1,n2;
    printf("Enter the nuber of elements of 1st array:");
    scanf("%d",&n1);

    for(i=0; i<n1; i++)
    {
    scanf("%d",&a[i]);
    }
    printf("1st array is : \n");
    
    for (i=0; i<n1; i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n Enter the number of elements of 2nd array :");
    scanf("%d",&n2);

    for(i=0; i<n2; i++)
    {
    scanf("%d",&b[i]);
    }
    printf("2nd array is: \n");
    
    for(i=0;i<n2;i++)
    {
    printf("%d \t",b[i]);
    }
    printf("\n The sum of the array is :");
    
    for(i=0; i<n1; i++)
    {
    c[i]=a[i]+b[i];
    printf("%d \t ",c[i]);
    }

    return 0;

}