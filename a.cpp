/**
 *  author:  arthamin
 * 
 *  ORAL 35 ON TOP UwU
**/
#include <bits/stdc++.h>
using namespace std;
  

#define v vector
#define f first
#define s second
#define setprecision(x,y) setprecision(x) << fixed << y
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define endl '\n'
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
typedef long long ll;
typedef long double ld;
typedef string str;


const int inf32 = 2e9 + 3;
const ll inf64 = 1e18;
 
 
int gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
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

// -------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -------------------------------------------------------------------------


void go()
{


}


int main()
{
    
   //  freopen("sum.in", "r", stdin);
   // freopen("sum.out", "w", stdout);
    ios;
    int t = 1;
    //cin >> t;
    while(t--) {
        go();
    }
    return 0;


}