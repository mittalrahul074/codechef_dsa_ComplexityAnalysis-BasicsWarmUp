#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	std::cin >> n;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
	    std::cin >> a[i];
	}
	sort(a,a+n);
	long long max=LONG_MIN,count;
	for(long long i=0;i<n;i++)
	{
	    if(a[i]*(n-i)>max)
	    {
	        max=a[i]*(n-i);
	    }
	}
	std::cout << max << std::endl;
	return 0;
}
