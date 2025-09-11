#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;
while(t--){
   string winner="Second";
   int n=0;
    cin>>n;
    int counter=0;
    int temp=n;
    while(counter<10){
        if((temp+1)%3==0 || (temp-1)%3==0){
            winner="First";
            break;
        }
        counter++;
    }
    cout<<winner<<endl;
    
}
return 0;

}