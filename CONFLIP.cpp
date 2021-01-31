#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	for (int i=0 ; i<t;i++)
	{
	    int g;
	    std::cin >> g;
	    for(int j=0;j<g;j++)
	    {
	        int n,l,q,h_count=0,t_count=0;
	        std::cin >> l >> n >> q;
	        if(l==1)
	        {
	            h_count=(n/2);
	            t_count=n-h_count;
	        }
	        else
	        {
	            t_count=n/2;
	            h_count=n-t_count;
	        }
	        if(q==1)
	        {
	            std::cout << h_count << std::endl;
	        }
	            
	        else
	            std::cout << t_count << std::endl;
	    }
	}
	return 0;
}
