#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void np ( long long n ){
    if( n == 0 ) return ; 
    np ( n / 2 ) ; 
    cout << n % 2 ; 
}

int main() {
    long long n ; cin >> n ; 
    if ( n == 0 ) {
        cout << 0 ; 
        return 0 ; 
    } 
    else np ( n ) ;   
    return 0;
}

// cach 2 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
string np ( long long n ){
    string s ; 
    if ( n == 0 ) {
        s = "0"; 
        return s ; 
    } 
    
    while ( n ){
        string r = to_string ( n % 2 ) ;
        s = r + s ; 
        n /= 2 ; 
    }
    return s ; 
}

int main() {
    long long n ; cin >> n ; 
    cout << np ( n ) ;   
    return 0;
}

// chuyen thap phan -> he 16 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void chuyen16 ( long long n ){
    if ( n == 0 ) return ; 
    chuyen16( n / 16 ) ; 
    int r = n %  16 ; 
    if( r == 10 ) cout << "A"; 
    else if ( r == 11 ) cout << "B" ; 
    else if ( r == 12 ) cout << "C" ; 
    else if ( r == 13 ) cout << "D" ; 
    else if ( r == 14 ) cout << "E"; 
    else if ( r == 15 )cout << "F" ; 
    else cout << r ; 
}
int main() {
    long long n ; cin >> n ; 
    if ( n == 0 ) {
        cout << 0 ; 
        return 0 ; 
    } 
    else chuyen16 ( n ) ;   
    return 0;
}


