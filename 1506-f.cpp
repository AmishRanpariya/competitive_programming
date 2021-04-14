/*
https://codeforces.com/contest/1506/problem/F
*/

#include <bits/stdc++.h> 
using namespace std; 
#define REP(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;

bool comp(pair<ll,ll> a,pair<ll,ll> b){
  if(b.first-b.second==a.first-a.second){
    return b.first>a.first;
  }
  return b.first-b.second>a.first-a.second;
}

void solve(){
  int n;
  cin>>n;
  vector<pair<ll,ll>> v(n);
  ll x=1,y=1;
  REP(i,0,n){
    cin >> v[i].first;    
  }
  
  REP(i,0,n){
    cin >> v[i].second;    
  }
  sort(v.begin(),v.end(),comp);
  ll ans=0;
  for(auto p:v){
    ll a=p.first;
    ll b=p.second;
    if((x-y)%2==0 && a-b==x-y){
      ans+=a-x;
    }else if((x-y)%2 == 0 && (a-b)%2==0){
      ans+=(a-b-x+y)/2;
    }else if((x-y)%2 == 1 && (a-b)%2==0){
      ans+=(a-b-x+y+1)/2;
    }else if((x-y)%2 == 0 && (a-b)%2==1){
      ans+=(a-b-x+y-1)/2;
    }else if((x-y)%2 == 1 && (a-b)%2==1){
      ans+=(a-b-x+y)/2;
    }
   
    x=a;
    y=b;
  }
  
  cout<<ans;
}



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t = 1; 
   cin >> t; 
    while (t--) { 
        solve(); 
        cout << "\n"; 
    } 
    return 0; 
} 

 