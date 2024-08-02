#include<stdio.h>

int main()
{
    int a[100],i,n,F,index=-1,x;
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
    printf("\n Enter the value you want to find: \t");
    scanf("%d",&F);
    for(i=0; i<n; i++)
    {
    index++;
    if(F==a[i])
    {
    x=1;
    break;
    }
    }
    if(x==1)
    {
    printf("The element is found at : %d",i+1);
    }
    else
    {
    printf("The element was not found ");
    }
    return 0;

}