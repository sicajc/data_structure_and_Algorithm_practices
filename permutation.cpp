#include <iostream>
using namespace std;

void permutation(int *a, const int k, const int m)
{   //Tree can be drawn out to better understand this problem. And it allows us to spot the recursive property hidden within.

    // Base case
    if (k == m)
    {
        // Print out all the possible permutations
        for (int i = 0; i <= m; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else
        for (int i = k; i <= m; i++) // Traverse every possible sub-array
        {
            //To reuse the array, first swap the element with the first position of array.
            //This swap is the main power house
            swap(a[k], a[i]);
            permutation(a, k + 1, m);
            //Swap it back after permutation returns, so that the other permutation with different first value can be performed.
            swap(a[k], a[i]);
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
    int arr[] = {10, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    permutation(arr, 0,n-1);

    return 0;
}