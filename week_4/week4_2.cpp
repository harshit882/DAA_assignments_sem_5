#include<iostream>
using namespace std;
int A = 0;
int B = 0;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
    B++;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            A++;
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        quickSort(a, 0, n - 1);
        cout<<"Comparision: "<<A<<endl;
        cout<<"Swaps: "<<B<<endl;
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        B = 0;
        A = 0;
        cout<<endl;
    }
    return 0;
}
