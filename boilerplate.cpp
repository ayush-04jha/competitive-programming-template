#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define vec  vector<int>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359


int main(){
    vec v;
    v.pb(5);
    v.pb(4);
    v.pb(6);
    v.pb(4);
    v.pb(9);
    sort(v);
    fo(i,5){
         cout<<v[i]<<" ";
    }
    cout<<yes<<endl;

    return 0;
}