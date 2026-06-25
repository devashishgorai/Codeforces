#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int size=1;
        int layer=0;
        int tempa=a;
        int tempb=b;
        //bool
        bool white = true;
        while(true){
            if(white){
                if(tempa>=size){
                    tempa -=size;
                }
                else {
                    break;
                }
            }
            else{
                   if(tempb>=size){
                      tempb -= size;
                   }
                   else {
                            break;
                   }
            }
            white = !white;
            layer++;
            size *=2;
        }
        
        int ans = layer;
     
          size=1;
         layer=0;
         tempa=a;
         tempb=b;
        //bool
         white = false;
        while(true){
            if(white){
                if(tempa>=size){
                    tempa -=size;
                }
                else {
                    break;
                }
            }
            else{
                   if(tempb>=size){
                      tempb -= size;
                   }
                   else {
                            break;
                   }
            }
             white = !white;
            layer++;
            size *=2;
        }
        ans = max(ans,layer);

         cout<<ans<<endl;
    
    }
    return 0;
}