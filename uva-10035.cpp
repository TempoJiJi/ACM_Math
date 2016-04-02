/*********************
    Input is less than 10 digits, so int is enough
    dont need string 
**********************/
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
	if(a==0 && b==0)
	    break;
	int answer = 0;
	int carry = 0;
	/********
	    must use || instead of &&
	    because if the last number of a is 9
	    the last number of b is 0
	    and now carry is 1
	    the answer will add more one lagi 
	    so must stop while a or b one is 0
	*********/
	while(a!=0 || b!=0){
	    carry = a%10 + b%10 + carry;
	    carry/=10;
	    a/=10;b/=10;
	    if(carry!=0)
		answer++;
	}
	if(answer==0)
	    printf("No carry operation.\n");
	else if(answer>1)
	    printf("%d carry operations.\n",answer);
	else
	    printf("%d carry operation.\n",answer);
    }
}
