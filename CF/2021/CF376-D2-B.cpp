/*
  https://codeforces.com/contest/376/problem/B
*/

#include <bits/stdc++.h> 
using namespace std; 
#define REP(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;


//CF376-D2-B
void solve(){
  
  int n,m;
  cin>>n >>m;
  vector<pair<int,int>> v(n+2,{0,0});
  int sum=0;
 
  REP(i,0,m){
    int a,b,c;
    cin >>a >>b >>c;
    v[a].first+=c;
    v[b].second+=c;
  }
   sum=0;
  REP(i,0,n+1){
    if(v[i].first<v[i].second){
      sum+=v[i].second-v[i].first;
    }
  }
  cout<<sum;
  
}


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t = 1; 
   //cin >> t; 
    while (t--) { 
        solve(); 
       // cout << "\n"; 
    } 
    return 0; 
} 

 