#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fibo( int n ){
    if ( n == 1 ){
        printf( "0" ) ; 
        return; 
    }
    if ( n == 2 ){
        printf( "1" ); 
        return ; 
    }
    long long f1 = 0 , f2 = 1 , fn ; 
    for ( int i = 3 ; i <= n ; i ++ ){
        fn = (f1 + f2) % 1000000007 ;
        f1 = f2 ; 
        f2 = fn ; 
    }
    printf ( "%lld" , fn ) ; 
}
int main() {
    int n ; scanf( "%d" , &n ) ; 
    fibo ( n ) ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
