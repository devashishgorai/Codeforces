#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
    int k;
    cin >> k;
 
    int cnt2 = 0;
    bool ok = false;
 
    for (int i = 0; i < k; i++)
    {
      int x;
      cin >> x;
 
      if (x >= 3)
        ok = true;
      else if (x == 2)
        cnt2++;
    }
 
    if (ok || cnt2 >= 2)
      cout << "YES
";
    else
      cout << "NO
";
  }
 
  return 0;
}