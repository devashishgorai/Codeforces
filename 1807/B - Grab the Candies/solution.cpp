#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
    int n;
    cin >> n;
 
    int sumEven = 0;
    int sumOdd = 0;
 
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
 
      if (x % 2 == 0)
        sumEven += x; // Even bag Mihai ko milega
      else
        sumOdd += x; // Odd bag Bianca ko milega
    }
 
    // Agar total even candies > total odd candies hai
    // toh even bags pehle rakhne se Mihai hamesha lead me rahega
    if (sumEven > sumOdd)
      cout << "YES
";
    else
      cout << "NO
";
  }
 
  return 0;
}