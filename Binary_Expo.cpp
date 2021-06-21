/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll mul(ll n,ll x){
    if(x==0)
        return 1;
    else if(x>0 && x%2==0)
        return mul(n,x/2)*mul(n,x/2);
    else if(x>0 && x%2==1)
        return mul(n,(x-1)/2)*mul(n,(x-1)/2)*n;
}
int main()
{
    ll n=146;
    ll x=2;
    cout<<mul(n,x);
    return 0;
}
