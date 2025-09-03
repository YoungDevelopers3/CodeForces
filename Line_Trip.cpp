#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;
while(t--){
   int n=0,x=0;
   cin>>n>>x;
   vector<int>points;
   points.push_back(0);
   for(int i=0;i<n;i++){
      int point=0;
      cin>>point;
      points.push_back(point);
   }
   points.push_back(x);
   n=points.size();
   int fuel=INT_MIN;
   for(int i=1;i<n;i++){
     if(i==n-1){
        fuel=max(fuel,2*(points[i]-points[i-1]));
     }
     else{
        fuel=max(fuel,points[i]-points[i-1]);
     }
     
   }
   cout<< fuel<<'\n';

}
return 0;

}