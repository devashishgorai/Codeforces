#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        //logic part hoga
        for(int i=0;i<n-1;i++)
        {
            if(A[i]<A[i+1])
            {
                A[i+1]=A[i];
            }
        }
        //sum calculation of new array
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans += A[i];
        }
        cout<<ans<<endl;

    }
    return 0;
}