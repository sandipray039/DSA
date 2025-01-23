#include <iostream>
using namespace std;

void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bubble(arr,n);
   printArr(arr,n);
   return 0;

}

