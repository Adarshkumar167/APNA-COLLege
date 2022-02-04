#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long k ;
        cin >> k ;

        int ans = 0 ;

        while(k%2 == 0)
        {
            ans++ ;
            k /= 2 ;
        }

        cout << ans << '\n' ;
    }
    return 0;
}