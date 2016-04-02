/***********************
    5P3 = 5*4*3
    5P2 = 5*4
   *** nPr = nCr * r! ***
   *** nCr = nPr / r! ***

***********************/

#include<iostream>
#include<cstdio>
using namespace std;

void swap(long long *a,long long *b)
{
    long long tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    long long m,n,answer;
    while(cin>>m>>n){
	if(m==0 && n==0)
	    break;
	if(m>n) swap(&m,&n);
	answer = (m*(m-1)*n) + (n*(n-1)*m) ;
	answer += 4*( (2*m*(m-1)*(m-2)/6) + ((n-m+1)*m*(m-1)/2) );
	printf("%lld\n",answer);
    }
}
