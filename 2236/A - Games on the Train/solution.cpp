#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        // find for largest
        int lar=A[0];
        int min1 = A[0];
        for(int i=0;i<n;i++)
        {
            lar = max(lar,A[i]);
            min1 = min(min1,A[i]);
        }
        cout<<(lar-min1)+1<<endl;
 
    }
    return 0;
}