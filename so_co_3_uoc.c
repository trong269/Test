#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int b[ 1000001 ] ; 
void sang (){
    for ( int i = 0 ; i <= 1000000 ; i ++ ){
        b[ i ] = 1 ; 
    }
    b[ 0 ] = b[ 1 ] = 0 ; 
    for ( int i = 2 ; i <= sqrt( 1000000 ); i ++ ){
        if ( b[ i ] ){
            for ( int j = i * i ; j <= 1000000 ; j += i ){
                b[ j ] = 0 ; 
            }
        }
    }
}
/* 
    - số có đúng 3 ước chính là bình phương của snt.
    - số chính phương luôn có số lượng ước là số lẻ.
*/
int main() {
    sang( ); 
    long long n ; scanf ( "%lld" , &n ); 
    for ( int  i = 2 ; i <= sqrt( n ) ; i ++ ){
        if( b[ i ] ){
            printf( "%lld " , ( long long )i * i ); 
        }
    }
        
    return 0;
}