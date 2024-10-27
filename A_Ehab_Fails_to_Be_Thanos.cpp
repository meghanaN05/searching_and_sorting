#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
    cin>>n;
      n =n*2;
    vector<long long>v(n);
    for(long long i=0;i<2*n;i++){
       cin>> v[i];
    }
    sort(v.begin(),v.end());
    long long firstN =0;
    long long lastN=0;
    for(long long i=0;i<n/2;i++){
       firstN +=v[i];
    }
    for(long long i=n/2;i<n;i++){
       lastN +=v[i];
    }
    if(firstN==lastN){
        cout<<"-1"<<endl;
    }
   else{
    for(long long i=0;i<n;i++){
     cout<<v[i]<<" ";
    }
   }
}