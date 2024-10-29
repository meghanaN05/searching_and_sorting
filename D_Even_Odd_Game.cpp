#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    long long n;
    cin>>n;
    vector<int>a(n);
    for(long long i=0;i<n;i++)
    cin>>a[i];
    long long alicesum=0;
    long long bobsum=0;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    string turn ="A";
    for(long long i=0;i<n;i++){
        if(turn=="A"){
            if(a[i]%2==0)
            alicesum +=a[i];
            turn="B";
        }
        else{
            if(a[i]%2!=0)
            bobsum +=a[i];
            turn="A";
        }
    }
    if(alicesum>bobsum) cout<<"Alice"<<endl;
   else if(alicesum==bobsum) cout<<"Tie"<<endl;
   else cout<<"Bob"<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;

}