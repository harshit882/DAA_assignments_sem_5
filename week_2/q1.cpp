// I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array
// or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))


#include <iostream>
using namespace std;

int binarySearch_start(int arr[], int start, int end, int key)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;
        if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            return binarySearch_start(arr, (mid + 1), end, key);
        else
            return binarySearch_start(arr, start, (mid - 1), key);
    }
    return -1;
}
int binarySearch_end(int arr[], int start, int end, int key, int n)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;
        if ((mid == n - 1 || key < arr[mid + 1]) && arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return binarySearch_end(arr, start, (mid - 1), key, n);
        else
            return binarySearch_end(arr, (mid + 1), end, key, n);
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;
        int first = binarySearch_start(a, 0, n - 1, key);
        int last = binarySearch_end(a, 0, n - 1, key, n);
        cout <<key <<" - " << (last - first + 1) << endl;
    }
    return 0;
}
