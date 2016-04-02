/****************
    odd +- even = odd
    odd +- odd = even
    prime must be odd unless 2 is even.

   *** So according to the above , if the number is odd-
       one of the prime number would be 2. ***

    NOTE:
	If n is odd , just find out the n-2 is prime or not.
	Else if n is even , then p1 must be the num from 0 to n/2-1
	and p2 must be n-p1.
****************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#define MAX 100000000
bool isprime[MAX];
using namespace std;

void Sieve() {
    memset(isprime,true,sizeof(isprime));
    isprime[0]=isprime[1] = false;
    for(int i=2; i<=sqrt(MAX); ++i) {
        if(isprime[i]) {
            for(int j=i+i; j<MAX; j+=i)
                isprime[j]=false;
        }
    }
}

int main() {
    Sieve();
    int n;
    while(cin>>n) {
	bool check = false;
	if(n%2 != 0){
	    if(isprime[n-2])
		printf("%d is the sum of 2 and %d.\n",n,n-2);
	    else
	        printf("%d is not the sum of two primes!\n",n);		
	}else{
	    for(int i = (n-1)/2 ; i>=0 ;i--){
		/*  If p1 now is prime , then find out the n-p1	*/
		if(isprime[i] && isprime[n-i]){
		    printf("%d is the sum of %d and %d.\n",n,i,n-i);
		    check = true;
		    break;
		}
	    }
	    if(!check)
		printf("%d is not the sum of two primes!\n",n);		
	}
    }
}
