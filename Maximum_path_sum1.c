#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long a[ 100 ][ 100 ] ; 
long long b[ 100 ][ 100 ] ;
int main() {
    int n , m ; scanf ( "%d%d" , &n , &m ) ; 
    for  ( int i = 1 ; i <= n ; i ++  ){
        for ( int j = 1 ; j <= m ; j ++ ){
            scanf( "%lld" , &a[ i ][ j ] ); 
        }
    }
    for( int i = 1 ; i <= n ; i ++ ){
        for ( int j = 1 ; j <= m ; j ++ ){
            if ( i == 1 ) b[ i ][ j ] = b[ i ][ j - 1 ] + a[ i ][ j ] ; 
            else if ( j == 1 )b[ i ][ j ] = b[ i - 1 ][ j ] + a[ i ][ j ] ; 
            else b[ i ][ j ] = fmax ( b[ i - 1 ][ j ]  , b[ i ][ j - 1 ] ) + a[ i ][ j ] ; 
        }
    }
    printf( "%lld" , b[ n][ m ] ); 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
