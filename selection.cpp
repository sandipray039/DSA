#include <iostream>
using namespace std;

void selection(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int mini=i;
        for( int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]); 
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
    selection(arr,n);
    print(arr, n);
    return 0;
}