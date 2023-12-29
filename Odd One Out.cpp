#include <bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,c;
cin>>t;
while(t--){
    cin>>a>>b>>c;
    if(a==b &&b!=c )
        cout<<c<<"\n";
    else if(b==c && c!=a)
        cout<<a<<"\n";
    else if(a==c &&c!=b)
        cout<<b<<"\n";
}

}
