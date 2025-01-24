//finding array is sorted whike rotated

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &v, int n){
int c=0;
for(int i=0;i<n;i++){

if(v[i]>v[(i+1)%n]){
c++;
}

}
if(c>1){
return false;
}
else{
return true;
}
}

int main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
bool ans=check(v,n);
if(ans==true){
    cout<<"true";
}
else{
    cout<<"false";
}

return 0;


}