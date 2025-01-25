//remove duplicates

#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n){
int uniq=0;
for(int i=0;i<n;i++){
if(arr[i]!=arr[uniq]){

arr[uniq+1]=arr[i];
uniq++;

}


}
return ++uniq;

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int ans=removeDup(arr,n);
for(int i=0;i<ans;i++){
cout<<arr[i]<<;
}
return 0;
}