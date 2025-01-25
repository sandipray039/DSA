//rotating the array rightwise

#include <bits/stdc++.h>
using namespace std;

void shift(vector<int>&nums,int n)
{
  int l=0,r=0;
while(r<n){

if(nums[r]!=0){

swap(nums[l],nums[r]);
l++;
}
r++;

}
 }




int main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
shift(v,n);
for(int i=0;i<n;i++){
cout<<v[i];
}
return 0;

}