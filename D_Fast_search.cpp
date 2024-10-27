#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

int solve(int val,int n,int arr[])
{
    int si=0,ei=n-1,ans=-1;
    while(si<=ei){
        int mid =(si+ei)/2;
        if(arr[mid]<=val){
            ans =mid;
            si =mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans+1;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int l,r;
        cin>>l>>r;
        int ans1= solve(l-1,n,arr);
        int ans2= solve(r,n,arr);
        cout<<ans2-ans1<<" ";
    }
    

    return 0;
}