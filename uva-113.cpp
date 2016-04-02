/*****************************
    1<=p<=10^101
    1<=n<=200
    double is enough for p,but has a little bit deviation(wu cha)

    math:
	k^n = p
	k = p^n/1
******************************/
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double p,n;
    while(cin>>n>>p)
	printf("%.0lf\n",pow(p,1/n));
}
