#include <stdio.h>

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {3, 5, 9, 2, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size);

    insertionSort(arr, size);
    printf("\nsorted array : ");
    printArr(arr, size);
    
    printf("\nmin element : %d", arr[0]);
    printf("\nmax element : %d", arr[size-1]);
    

    return 0;
}