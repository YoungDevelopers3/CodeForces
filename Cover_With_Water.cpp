#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
     int n=0;
     cin>>n;
     string s="";
     cin>>s;
     bool three_dots_together=false;
     int counter=0;
     for(int i=0;i<n;i++){
        if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
            three_dots_together=true;
            break;
        }
        if(s[i]=='.'){
            counter++;
        }
     }
     
     if(three_dots_together){
        cout<<2<<endl;
     }
     else{
        cout<<counter<<endl;
     }

    }
    return 0;
}