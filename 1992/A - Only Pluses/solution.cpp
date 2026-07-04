#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
 
    int ans = 0;
 
    // i = a ko kitni baar increase karna hai
    for (int i = 0; i <= 5; i++)
    {
 
      // j = b ko kitni baar increase karna hai
      for (int j = 0; j <= 5 - i; j++)
      {
 
        // bachi hui increments c ko milengi
        int k = 5 - i - j;
 
        // Current product calculate karo
        int product = (a + i) * (b + j) * (c + k);
 
        // Maximum answer update karo
        ans = max(ans, product);
      }
    }
 
    cout << ans << endl;
  }
 
  return 0;
}