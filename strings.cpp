
/*


 ██████   █████
██    ██  ██   ██
██    ██  ███████
██    ██  ██   ██
 ██████   ██   ██



████████ ██   ██ ███████   ██       █████  ███████ ████████   ██████   █████  ███    ██  ██████ ███████
   ██    ██   ██ ██        ██      ██   ██ ██         ██      ██   ██ ██   ██ ████   ██ ██      ██
   ██    ███████ █████     ██      ███████ ███████    ██      ██   ██ ███████ ██ ██  ██ ██      █████
   ██    ██   ██ ██        ██      ██   ██      ██    ██      ██   ██ ██   ██ ██  ██ ██ ██      ██
   ██    ██   ██ ███████   ███████ ██   ██ ███████    ██      ██████  ██   ██ ██   ████  ██████ ███████


 */
#include<iomanip>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define VAMOOOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
#define endl "\n";
#define debug(x) cout<<#x<<" = "<<x<<endl;
bool isprime(ll x)
{
    for(ll i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return 0;
            return 1;
}
ll to_binary(string s)
{
    ll sum=0;
    for(ll i=s.size()-1,j=0;i>=0;i--,j++)
    if(s[i]=='1')
    sum+=pow(2,j);
    return sum;
}
ll btod( ll n){
if(n == 0) return 0;

return n%10 + (2*btod(n/10));
}
 bool ispow(ull x)
 {
	return (x != 0) && ((x & (x - 1)) == 0);
 }
 void convertToBinary(unsigned int n){
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    printf("%d", n % 2);
}
void solve()
{
   int n;
   cin>>n;
   vector<ll>v(n);
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       sum+=v[i];
   }

    cout<<int(ceil((sum/n)))<<endl;
}
int main()
{
//    freopen("input.txt", "r",stdin);
//    freopen("output.txt", "w", stdout);
    VAMOOOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
