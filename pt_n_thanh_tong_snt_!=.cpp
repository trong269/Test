#include<bits/stdc++.h>
using namespace std ; 
int b[ 10000001 ] = {0}; 
void sang(){
	for ( int i = 0 ; i <= 10000000 ; i ++ ){
		b[ i ] = 1 ; 
	}
	b[ 0 ] = b[ 1 ] = 0 ; 
	for ( int i = 2 ; i <= sqrt( 10000000 ) ; i ++ ){
		if( b[ i ] ){
			for( int j = i * i ; j <= 10000000 ; j += i  ){
				b[ j ] = 0 ; 
			}
		}
	}
	
}
bool check( int n ){
	if( n == 1 || n == 4 || n == 6 ) { 
		return 0   ;
	}
	return 1; 
}
int main(){
	sang () ; 
	int n; cin >> n ; 
	if ( check ( n ) == 0 ){
		cout << "-1" ;
	 	return 0 ; 
		}
	vector<int > v ; 
	for ( int i = n ; i >= 2 ; i -- ){
		if( b[ i ] ){
			v.push_back( i ) ; 
		}
	}
	
	while ( n ){
		for ( auto x : v ){	
				if ( b[ x ] && x < n  && check( n - x ) ){
					cout << x << " " ; 
					n = n - x ;  
					break ;  
				} 
			}
		if ( b[ n ] ){
			cout << n << " " ; 
			break ;  
		}
		}
	return 0 ; 
	}
		