#include <bits/stdc++.h>
using namespace std;
#define ll  long long
void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    map<ll,ll>ma;
    for(int i=0;i<n;++i){
     cin>>vec[i];
     vec[i] *= ((i % 2) ? -1 : 1);
    }
    ll sum=0;
    ma[0]=1;
    for(int i=0;i<n;++i){
        sum += vec[i];
        if(ma.find(sum)!=ma.end()) {
            cout << "YES\n";
            return;
        }
        ++ma[sum];
    }
    cout<<"no\n";
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
