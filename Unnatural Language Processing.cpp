#include <bits/stdc++.h>
using namespace std;

bool isvowal(char& c){
    return (c=='a'||c=='o'||c=='u'||c=='e'||c=='i');
}

int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       for(int i=n-1;i>=0;--i){
           //ba.ced.bab
           if(!isvowal(s[i])&& isvowal(s[i+1])&& !isvowal(s[i+2]))
               s.insert(i+3,".");
           else if(isvowal(s[i])&& !isvowal(s[i+1]))
               s.insert(i+2,".");
       }
       cout<<s<<"\n";
   }
}