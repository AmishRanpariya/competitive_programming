/*
https://codeforces.com/contest/337/problem/B
*/

#include <bits/stdc++.h> 
using namespace std; 
#define REP(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;

int gcd(int a,int b){
  if(a==b){
    return a;
  }else if(a==0){
    return b;
  }else if(b==0){
    return a;
  }
  return gcd(min(a,b),max(a,b)%min(a,b));
}

void solve(){
  
  int x,y,a,b;
  cin >>x >>y >>a >>b;
  int gx=gcd(x,y);
  int ga=gcd(a,b);
  x/=gx;
  y/=gx;
  a/=ga;
  b/=ga;
  if(x*b==y*a){
    cout<<0<<"/"<<1;
    return;
  }
  else if(x*b>y*a){
    int g=gcd(b*x-a*y,b*x);
    cout<<(b*x-a*y)/g<<"/"<<b*x/g;
  }else{
    int g=gcd(a*y-b*x,a*y);
    cout<<(a*y-b*x)/g<<"/"<<a*y/g;
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

 