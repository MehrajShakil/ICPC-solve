#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,tc=0;
    cin >> t;
    while(t--){
       int n,mn=0,cur=0;
       cin>>n;
       for(int i=1;;i*=2){
           cur+=i;
           if(cur>=n)break;
           mn++;

       }
       cout<<"Case "<<++tc<<": "<<n-1<<" "<<mn<<'\n';
    }

}
