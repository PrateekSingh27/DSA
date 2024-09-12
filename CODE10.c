#include <stdio.h>
void merge(int a[], int start, int mid, int end)
{
    int i, j, k, n1, n2;
    int l[50], r[50];

    n1 = mid - start + 1;
    n2 = end - mid;

    for (i = 0; i < n1; i++)
    {
        l[i] = a[start + i];
    }

    for (j = 0; j < n2; j++)
    {
        r[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
            {
                a[k] = r[j];
                j++;
            }

    k++;
    }

    while(i< n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = r[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(a, start, mid);
        mergesort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}
int main()
{
    int i, n, a[100];
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
            scanf("%d", &a[i]);
    }

    printf("The sorted array is:\n");
    
    mergesort(a, 0, n - 1);
    
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
