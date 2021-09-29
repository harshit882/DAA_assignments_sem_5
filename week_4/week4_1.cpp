#include<iostream>
using namespace std;
int C = 0;
void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
        C++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int A, int A1)
{
    if (A < A1)
    {
        int m = A + (A1 - A) / 2;

        mergeSort(arr, A, m);
        mergeSort(arr, m + 1, A1);
        merge(arr, A, m, A1);
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        bool flag = true;
        int n;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++) cin>>arr[i];
        mergeSort(arr, 0, num - 1);
        cout<<"Comparisions: "<<C<<endl;;
        for(int i=0;i<num;i++) cout<<arr[i]<<" ";
        cout<<endl;
        C = 0;
    }
    return 0;
}
