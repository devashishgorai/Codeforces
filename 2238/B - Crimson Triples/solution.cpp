#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int T;
  cin >> T;
 
  while (T--)
  {
 
    int n;
    cin >> n;
 
    vector<int> divisors(n + 1, 0);
 
    // divisor count
    for (int i = 1; i <= n; i++)
      for (int j = i; j <= n; j += i)
        divisors[j]++;
 
    vector<ll> f(n + 1);
 
    for (int g = n; g >= 1; g--)
    {
      ll cnt = n / g;
      f[g] = cnt * cnt;
 
      for (int k = 2 * g; k <= n; k += g)
        f[g] -= f[k];
    }
 
    ll ans = 0;
 
    for (int g = 1; g <= n; g++)
      ans += f[g] * divisors[g];
 
    cout << ans << "
";
  }
 
  return 0;
}