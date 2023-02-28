#include<bits/stdc++.h>
using namespace std ; 
long long ckn ( long long n , long long k ){
	long long res = 1 ; 
	for ( int i = 1 ; i <= k ; i ++ ){
		res *= n - i + 1 ; 
		res /= i; 
	}
	return res ; 
}
int main(){
	long long n , k ; cin >> n >> k ; 
	cout << ckn( n , k ) ; 
	return 0 ; 
}