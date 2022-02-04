#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if (x+y+z==101){
                if(x>y && x>z && x>50)
                cout<<"A"<<endl;
                else if(y>x && y>z && y>50)
                cout<<"B"<<endl;
                else if(z>50)
                cout<<"C"<<endl;
                else
                cout<<"NOTA"<<endl;
        }
        else
        cout<<"NOTA"<<endl;
    }
    return 0;
}