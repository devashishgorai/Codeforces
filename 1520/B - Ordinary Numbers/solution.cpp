#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        // Count digits
        int digits = to_string(n).size();
 
        // Numbers with fewer digits
        int ans = (digits - 1) * 9;
 
        // Create base = 111...1
        long long base = 0;
        for (int i = 0; i < digits; i++) {
            base = base * 10 + 1;
        }
 
        // Count ordinary numbers of same length
        ans += n / base;
 
        cout << ans << endl;
    }
 
    return 0;
}