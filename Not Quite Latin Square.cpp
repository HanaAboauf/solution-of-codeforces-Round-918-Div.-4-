#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    char a[3][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j)
            cin>>a[i][j];
    }
    int c=0;
    char replacedChar;
    for(int i=0;i<3;++i){
            if(a[0][i]=='A'||a[1][i]=='A'||a[2][i]=='A')
                c++;
            else
                replacedChar='A';

            if(a[0][i]=='B'||a[1][i]=='B'||a[2][i]=='B')
                c++;
            else
                replacedChar='B';

            if(a[0][i]=='C'||a[1][i]=='C'||a[2][i]=='C')
                c++;
            else
                replacedChar='C';

    }

        if(c!=3){
         cout<<replacedChar<<"\n";
            }
        }
    }


