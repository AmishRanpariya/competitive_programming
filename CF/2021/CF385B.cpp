/*
https://codeforces.com/contest/385/problem/B

*/

#include<bits/stdc++.h>
using namespace std;


// GCC Optimizations
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")

// Macros
#define ll long long
#define int ll
#define debug(v) cout << ">>" << #v << ':' << v << endl;
#define pb push_back
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define umap unordered_map
#define pii pair<int , int>
#define all(v) v.begin() , v.end()   
#define ld long double
#define min3(a1,b1,cost) min(a1,min(b1,cost))
#define min4(a1,b1,cost,d ) min(a1 , min(b1 , min(cost,d)))
#define max3(a1,b1,cost) max(a1 , max(b1,cost))
#define max4(a1,b1,cost,d) max(max(a1,b1) , max(cost,d))
#define vi vector<int>     
#define x first
#define y second 
#define dbg(a1,b1) cout<<a1<<" "<<b1<<endl;   
#define mk make_pair  
#define rep(i,j,n) for(int (i)=(j) ; i<(n) ; i++)                       
#define pq priority_queue
#define vpii vector<pii>
#define mt make_tuple


// Array utils
#define ub upper_bound
#define lb lower_bound 
#define bs binary_search
int comb(int n, int r){if(r<0||r>n)return 0;if((n-r)<r)r=n-r; // nCr
int vec=1;for(int i=n;i>n-r;--i){vec=vec*i;}for(int i=1;i<r+1;++i){vec=vec/i;}return vec;}
template<typename T>void press(T &v){v.erase(unique(all(v)),v.end());}
int small(vi &vec,int x){return lb(all(vec),x)-vec.begin();} // # of values < x
int osmall(vi &vec,int x){return ub(all(vec),x)-vec.begin();}// # of values <= x
int big(vi &vec,int x){return vec.size()-osmall(vec,x);} // # of values > x
int obig(vi &vec,int x){return vec.size()-small(vec,x);} // # of values >= x
int freq(vi &vec,int x) {return ub(all(vec),x)-lb(all(vec),x);} // # of values = x
int maxa(vi &vec){return max_element(all(vec))-vec.begin();}
int mina(vi &vec){return min_element(all(vec))-vec.begin();}

// Bitwise operations
int Set(int qq , int pos){return (qq|(1<<pos));}
int chk(int qq , int pos){return (qq&(1<<pos));}
int bits(int qq){return __builtin_popcount(qq);}
int p2[32];

// Maths
int modpow(int x, int n, int m) 
{
   if (n == 0) return 1%m;
   int u = modpow(x,n/2,m);
   u = (u*u)%m;
   if (n%2 == 1) u = (u*x)%m;
   return u;
}

int _pow(int vec, int b)
{
   if(!b)return 1;
   int temp = _pow(vec, b/2);
   temp = (temp * temp);
   if(b%2)return (vec * temp);
   return temp;
}

int cl(int vec, int b){if(vec%b)return 1 + vec/b;return vec/b;}

//floodfill
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

//Constraints
const int MOD = 1e9 + 7;
const int inf = 1e18;
const int N = 1e5+5;
const int K = 1e3+10;


////////////////////////////////

  
void solve()
{
   string s;
   cin>>s;
   int l=s.size();
   int x=1,y,ans=0;
   vi v;
   rep(i,0,l-3){
     if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r'){
       v.push_back(i+1);
     }
   }
   rep(i,0,v.size()){
     y=l-v[i]-2;
     if(i){
       x=v[i-1]+1;
     }
     x=v[i]-x+1;
     ans+=x*y;
   }
   cout<<ans;
}

signed main(){
  /*
   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt" , "w" , stdout);
   #endif
   */
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL); 

   for(int i = 0 ; i<32 ; i++)p2[i] = (1<<i);
   cout<<fixed<<setprecision(12);
   int t ; t=1;
   //cin>>t;
   for(int i = 1 ; i<=t ; i++)
   {
     // cout<<"Case #"<<i<<": ";
      solve();
   }
   return 0;
}