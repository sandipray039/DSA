#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
       int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "enter the size of the array:";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the array before sorting is:";
    print(arr, n);
    cout << endl;
    cout << "the array after sorting is:";
    insertion(arr, n);
    print(arr, n);
    return 0;
}