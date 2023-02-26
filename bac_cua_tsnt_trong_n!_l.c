#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* 
   	b?c c?a tsnt trong n! = ( n / p^1 ) + ( n / p^2 ) + ... + ( n / p^k ) 
   	dk: p^k <= n.
*/ 
int main() {
    long long n , p ; scanf ( "%lld%lld" , &n , &p ) ; 
    long long dem = 0 ; 
    long long i = 1 ; 
    while( ( long long )pow ( p , i ) <= n ){
        dem += n / ( long long )( pow( p , i ) ) ; 
        i ++ ; 
    }
    printf( "%lld" , dem ) ; 
       
    return 0;
}