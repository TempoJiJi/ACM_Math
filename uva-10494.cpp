/****************************
    Huge Int division and mod

    *************************************
         n = (a[i] - '0' + n * 10) % b 
       this is a good way to get the mod
    *************************************

****************************/
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void division(string a,int b)
{
    int len = a.length();
    long long n = 0,answer = 0;
    bool check = false;
    for(int i=0;i<len;i++){
	/* divide (a,b) , 
	    and save the mod to n for the next division */
	answer = (a[i] - '0' + n * 10) / b;
	n = (a[i] - '0' + n * 10) % b;

	/* checking the number infrone is zero or not */
	if(check)
	    printf("%d",answer);
	else if(!check && answer!=0){	//the first non zero number
	    printf("%d",answer);
	    check = true;
	}
    }   
    if(!check)
	printf("0"); 
    printf("\n");
}

void mod(string a,int b)
{
    int len = a.length();
    long long answer = 0;
    /* mod a with b untill last */
    for(int i=0;i<len;i++)
	answer = (a[i] - '0' + answer * 10) % b;
    printf("%lld\n",answer);
}

int main()
{
    string a;
    char c;
    int b;
    while(cin>>a>>c>>b){
	if(a=="0")
	    printf("0\n");
	else if(c=='/')
	    division(a,b);
	else
	    mod(a,b);
    }
}
