#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	for(int z=0;z<t;z++)
	{
	    int n;
	    std::cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        std::cin >> a[i];
	    }
	    int min=a[0],count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<=min)
	        {
	            min=a[i];
	            count++;
	        }
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}
