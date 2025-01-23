#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) { 
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
 


void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);

    }
}
void printArr(int arr[],int n)
{
     for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    cout<<"enter the size of the array:";
    int n;
    cin >> n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"the array before sorting is:";
   printArr(arr,n);
   cout<<endl;
    cout<<"the array after sorting is:";
    mergesort(arr,0,n-1);
   printArr(arr,n);
   return 0;

}
