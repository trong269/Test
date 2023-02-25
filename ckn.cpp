#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ; 
ll ckn ( ll k , ll n ){
    if( k == 0 || k == n )return 1 ; 
    if( k == 1 || k == n - 1 ) return n ; 
    return ckn( k , n - 1 ) + ckn ( k - 1 , n - 1 ) ; 
}

int main() {
    int n , k ; cin >> n >> k ; 
    cout << ckn ( k , n ) ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

