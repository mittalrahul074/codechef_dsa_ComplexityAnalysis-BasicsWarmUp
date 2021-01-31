#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	for(int w=0;w<t;w++)
	{
	    long a,x=1,count=0;
	    std::cin >> a;
	    for(long i=5;i<=a;i=i*5)
	    {
	        count+=a/i;
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}
