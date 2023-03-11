#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n , m ; scanf ( "%d%d" , &n , &m ); 
    int a[ 1000 ][ 1000 ] ; 
    int  b[ 1000 ][ 1000 ] ; 
    for ( int i = 1 ; i <= n ; i ++ ){
        for ( int j = 1 ; j <= m ; j ++ ){
            scanf ( "%d" , &a[ i ][ j ] ); 
        }
    }
    for( int i = 1 ; i <= n ; i ++ ){
        for ( int j = 1 ; j <= m ; j ++ ){
            b[ i ][ j ] = b[ i ][ j - 1 ] + b[ i -1 ][ j ]  - b[ i - 1 ][ j - 1 ] + a[ i ][ j ] ; 
        }
    }
    int t ; scanf ( "%d" , &t ); 
    while ( t -- ){
        int x1 , x2 , y1 , y2 ; scanf ( "%d%d%d%d" , &x1 , &x2 , &y1 , &y2 ); 
        printf( "%d\n" , b[ x2 ][ y2 ] - b[ x1 - 1 ][ y2 ] - b[ x2 ][  y1 - 1 ] + b[ x1 - 1 ][ y1 - 1 ] ); 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}