#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int helper(int n,int arr[],int val){
    int si=0,ei=n-1,ans=-1;
    while(si<=ei){
        int mid =(si+ei)/2;
        if(arr[mid]<=val){
            ans =mid;
            si =mid+1;
        }
        else{
            ei =mid-1;
        }
    }
    return ans+1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    for(int i=0;i<k;i++){
        cin>>val;
        cout<<helper(n,arr,val)<<endl;
    }
}