#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
 
    long long n, a, b;
    cin >> n >> a >> b;
 
    // Agar 3 individual keys saste ya equal hain
    if (3 * a <= b)
    {
      cout << n * a << endl;
    }
    else
    {
      long long groups = n / 3; // Full groups
      long long rem = n % 3;    // Remaining students
 
      long long ans = groups * b;
 
      // Remaining students ke liye
      ans += min(rem * a, b);
 
      cout << ans << endl;
    }
  }
 
  return 0;
}