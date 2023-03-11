#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n ; cin >> n ; 
    int a[ 100 ][ 100 ] ; 
    for ( int i = 1 ; i <= n ; i ++){
        for ( int j = 1 ; j <= n ; j ++ ){
            cin >> a[ i ][ j ] ; 
        }
    }
    map<int,int> mp ; 
    for ( int i = 1 ; i <= n ; i ++ ){
        for ( int j = 1 ; j <= n ; j ++ ){
            mp[ a[ i ] [ j ] ] = 0 ; 
        }
    }
    for ( int i = 1 ; i <= n ; i ++ ){
        for ( int j = 1 ; j <= n ; j ++ ){
            if ( mp[ a[ i ][ j ] ] == i - 1 ) mp [ a[ i][ j ] ] = i ; 
        }
    }
    bool ok = 0 ; 
    for ( int i = 0 ; i <= 100 ; i ++ ){
        if ( mp[ i ] == n ){
            cout << i << " " ; 
            ok = 1 ; 
        }
    }
    if ( ok == 0 )cout << "NOT FOUND"; 
    return 0 ; 
}