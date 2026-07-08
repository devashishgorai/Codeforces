#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
 
  while (t--)
  {
    long long n, k;
    cin >> n >> k;
 
    long long ans = 0;
    long long rem = n;
 
    for (int b = 0; b <= 20; b++)
    {
      long long cost = 1LL << b;
 
      if (cost > rem)
        break;
 
      long long take = min(k, rem / cost);
 
      ans += take;
      rem -= take * cost;
    }
 
    cout << ans << "
";
  }
 
  return 0;
}