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
    int n;
    cin >> n;
 
    vector<long long> w(n);
 
    long long minOdd = LLONG_MAX;  // 1st,3rd,5th... positions (1-based)
    long long maxEven = LLONG_MIN; // 2nd,4th,6th... positions (1-based)
 
    for (int i = 0; i < n; i++)
    {
      cin >> w[i];
      if ((i + 1) % 2 == 1)
        minOdd = min(minOdd, w[i]);
      else
        maxEven = max(maxEven, w[i]);
    }
 
    if (n % 2 == 0 && minOdd - maxEven >= 2)
      cout << "YES
";
    else
      cout << "NO
";
  }
 
  return 0;
}