#include <bits/stdc++.h>
using namespace std;

int uniq(int arr[],int n){
    int sum=(n*(n+1))/2;
    int s=0;
    for(int i=0;i<n;i++){
s+=arr[i];
}
return (sum-s);
}

int main(){
    int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int ans=uniq(arr,n);
cout<<ans;
return 0;
}