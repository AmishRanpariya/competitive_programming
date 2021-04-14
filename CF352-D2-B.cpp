/*
  https://codeforces.com/contest/352/problem/B
*/

#include <bits/stdc++.h> 
using namespace std; 
#define REP(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;


//CF352-D2-B
void solve(){
  
  int n;
  cin>>n;
  vector<vector<int>> a(100002);
  REP(i,0,n){
    int x;
    cin>>x;
    a[x].push_back(i);
  }
  vector<pair<int,int>> ans;
  
  REP(i,0,100001){
    int l=a[i].size();
    if(l==0){
      continue;
    }else if(l==1){
      ans.push_back({i,0});
    }else if(l==2){
      ans.push_back({i,a[i][1]-a[i][0]});
    }else{
      int diff=a[i][1]-a[i][0];
      bool valid=true;
      REP(j,2,l){
        if(a[i][j]-a[i][j-1]!=diff){
          valid=false;
          break;
        }
      }
      if(valid){
        ans.push_back({i,diff});   
      }
    }
  }
  int l=ans.size();
  cout<<l<<"\n";
  REP(i,0,l){
    cout<<ans[i].first<<" "<<ans[i].second<<"\n";
  }
  
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

 