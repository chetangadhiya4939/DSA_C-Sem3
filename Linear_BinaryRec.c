#include <stdio.h>
#include <stdlib.h>

void linearSearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("\n%d found at index %d\n", n, i);
        }
    }
}

void binarySearch(int arr[], int size, int n, int low, int high)
{
    int i = 0;
    int mid = (low+high)/2;

    while (high <= low)
    {
        i++;
        if (arr[mid] == n)
        {
            printf("\nNo. of iterations = %d", i);
            printf("\n%d found at index %d\n", n, mid);
            return;
        }
        else if (arr[mid] > n)
        {
            binarySearch(arr, size, n,low, mid - 1);
        }
        else if (arr[mid] < n)
        {
            binarySearch(arr, size, n, mid + 1, high);
        }
    }
    
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;
    int low = 0;
    int high = size - 1;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d\n", size);
    display(arr, size);

    linearSearch(arr, size, n);
    binarySearch(arr, size, n, low, high);

    return 0;
}
