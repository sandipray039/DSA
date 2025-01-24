// finding the largest element in an array

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int largest(vector<int>&arr,int n){
int mini=INT_MIN;
for(int i=0;i<n;i++){
if(arr[i]>mini){
mini=arr[i];
}
}
return mini;
}

int main(){


int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
int ans=largest(v,n);
cout<<"the largest element in the given array is :"<<ans<<endl;
return 0;

}