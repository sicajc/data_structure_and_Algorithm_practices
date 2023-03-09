#include <iostream>
using namespace std;

void selectionSort(int *a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
}

int binarySearch(int *a, const int x, const int arr_len)
{
    int left = 0;
    int right = arr_len - 1;
    int pivot = 0;

    while (left <= right)
    {
        pivot = (left + right) / 2;
        int pivot_value = a[pivot];

        if (left + 1 == right)
            break;

        if (pivot_value > x)
            right = pivot;
        else if (pivot_value < x)
            left = pivot;
        else
        {
            cout << "Value found at index: " << pivot << endl;
            return 1;
        }
    }

    cout << "Value does not exist" << endl;
    return 0;
}

void binarySearch2(int *a, const int x, const int arr_len, int left, int right)
{
    int middle = (left + right) / 2;
    if (left>right)
    {
        cout << "Value does not exist" << endl;
        return ;
    }

    if (x < a[middle])
        return binarySearch2(a, x, arr_len, left, middle - 1);
    else if (x > a[middle])
        return binarySearch2(a, x, arr_len, middle + 1, right);
    else
    {
        cout << "Value found at index: " << middle << endl;
    }
}

// A utility function to swap two elements
void swap(int *a, int *b)
{
    int t = *a; // The value of a stored into t
    *a = *b;    // The value of b stored into a
    *b = t;     // The vale of t sotred into b
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n-1;
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    binarySearch2(arr, 20, n , left,right);

    return 0;
}
