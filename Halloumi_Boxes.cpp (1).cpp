#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;
while(t--){
    int n=0,k=0;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int>a_copy=a;
    sort(a_copy.begin(),a_copy.end());

    if(a==a_copy || k>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
}
