/**
 *  author:  arthamin
 * 
 *  ORAL 35 ON TOP UwU
**/
#include <bits/stdc++.h>
using namespace std;
  

#define PB push_back
#define PPB pop_back
#define PPF pop_front
#define PF push_front
#define front front()
#define back back()
#define sub substr
#define V vector
#define F first
#define S second
#define ins insert
#define PF push_front
#define setprec(x,y) setprecision(x) << fixed << y
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define make_unique(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define MP make_pair
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pair<int,int>> vip;
typedef vector <pair<ll,ll>> vpll;
typedef set <int> seti;
typedef set <ll> setll;
typedef map <int,int> mapi;
typedef map <ll,ll> mapll;
typedef multiset <int,int> mset;
typedef set <int> seti;
typedef set <ll> setll;
typedef vector <long double> vld;
typedef map <int,int> mapi;
 
 
const ld pi = 3.141592653589793;
const int INF32 = INT_MAX;
const ll INF64 = LLONG_MAX;
 
 
ll maxi(ll a, ll b, ll c)
{
    return max(c, max(a,b));
}


ll mini(ll a, ll b, ll c)
{
     return min(c, min(a,b));
}
 
 
int gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}


int countSubs(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
     offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}


int sum(vi &a)
{
    int s = 0;for(int i = 0; i < len(a);i++) {s += a[i];} return s;
}


int prod(vi &a)
{
    int p = 1;for(int i = 0; i < len(a); i++) {p *= a[i];} return p;
}


int count(vi &a, int x)
{
    int cnt = 0;
    for(int i = 0; i < len(a); i++) {
        if(a[i] == x) {++cnt;}
    }
    return cnt;
}


ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}

bool prime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {if(n%i == 0)return false;}
    return true;
}



void go()
{
    

}
 


int main()
{
    ios;
    int t=1;
    //cin >> t;
    while(t--) {
        go();
    }
    return 0;
}
