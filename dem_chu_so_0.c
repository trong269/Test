#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long bac ( long long n , long long p ){
    long long dem = 0 ; 
    long long i = 1 ; 
    while ( ( long long )pow( p , i ) <= n ){
        dem += n / ( long long )( pow( p , i ) ); 
        i ++ ; 
    }
    return dem ; 
}
long long minx( long long a , long long b ){
    if ( a <= b ) return a ; 
    return b ; 
}
/* 
	ta có chỉ tích của 2 snt là 2 và 5 mới có thể tạo ra số các số 0 ở cuối của n!
	nên cần tìm bậc của 2 và 5 trong n! => lấy gtrị nhỏ nhất. 
*/  
int main() {
    long long n ; scanf ( "%lld" , &n ); 
    long long bac2 = bac ( n , 2 ) ; 
    long long bac5 = bac ( n , 5 ) ; 
    if ( bac2 && bac5 ){
        printf( "%lld" , minx( bac2 , bac5 ) % 1000000007 ); 
    } 
      
    return 0;
}