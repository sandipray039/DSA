//second largest element in the array

#include <bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int>&v,int n){

int max1=0;
int max2=0;
for(int i=0;i<n;i++){
if(v[i]>=max1){
max2=max1;
max1=v[i];
}
}
return max2;
}

int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
int ans=SecondLargest(v,n);
cout<<"the second largest element is  "<<ans<<endl;
return 0;

}