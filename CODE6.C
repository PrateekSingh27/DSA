#include<stdio.h>

void fib(int n)
{
    static int n1=0,n2=1,n3;

    if (n>2)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        fib(n-1);
    }

}

int main()
{
    int n;
    printf("Enter number of terms you want :");
    scanf("%d",&n);
    if (n==0)
    {
        return 0;    
    }
    if(n==1)
    {
        printf("%d",0);
        return 0;  
    }
    if(n==2)
    {
        printf("%d %d",0,1);
        return 0;
    }
    else
    {
        printf("%d %d",0,1);
        fib(n);
    }
    return 0;
}