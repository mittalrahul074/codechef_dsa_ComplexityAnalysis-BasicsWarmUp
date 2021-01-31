#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++)
	{
	    string s;
	    cin>>s;
	    int s1=0,s2=0,size=s.length();
	    for(int j=0;j<size/2;j++)
	        s1+=(s[j]*s[j]);
	    for(int j=(size+1)/2;j<size;j++)
	        s2+=(s[j]*s[j]);
	   if(s1==s2)
	        std::cout<< "YES" << std::endl;
	   else
	        std::cout << "NO" << std::endl;
	}
	return 0;
}
