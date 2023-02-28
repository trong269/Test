#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ; 
ll mu ( ll a , ll b ){
    ll m = 1000000007; 
    if ( b == 0 ) return 1 ; 
    ll x = mu( a , b/ 2 ); 
    if ( b % 2 ) return ( ( ( x % m ) * ( x %  m ) ) % m * ( a % m )  ) % m  ; 
    return ( ( x % m ) * ( x % m ) ) % m ; 
    
}

int main() {
    ll a , b ; cin >> a >> b ; 
    cout << mu( a , b ) ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}