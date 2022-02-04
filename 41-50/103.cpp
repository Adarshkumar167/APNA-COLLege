#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int k;
        cin>>k;
        int count = 0;
        
        if(k%2==0 && k>=1){
            for(int i=0;i<k;i++){
                int a[i] = {k/2};
                int s[i] += {a[i]};
                
                if(a[i]+s[i]==k){
                    count++;
                }
            }
        }
        cout<<count<<endl;;
    }
    return 0;
}