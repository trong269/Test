/* Cho phân tích thừa số nguyên tố của một số nguyên dương N, hãy đếm 
số lượng ước số của số nguyên dương đó. Ví dụ N = 60 = 2^2 * 3^1 * 5^1.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* 
	n = p1^e1 + p2^e2 +... + pk^ek.
  	số ước = d(n) = ( e1 + 1 ) * ( e2 + 1 ) * ....* ( ek + 1 ) 
*/
int main() {
    int n ; scanf( "%d" , &n ); 
    int t = n * 2 ; 
    int a[ t ]; 
    for ( int i = 0 ; i < t ; i ++){ 
        scanf( "%d" , &a[ i ] ); 
    }
    long long dem = 1 ; 
    for ( int i = 1 ; i < t ; i += 2 ){
        dem *= ( a[ i ] + 1 ) ; 
        dem = dem % 1000000007; 
    }
    printf( "%lld" , dem ); 
        
    return 0;
}
