#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++)
	{
	    int n,sum=0;
	    std::cin >> n;
	    string r;
	    std::cin >> r;
	    for(int j=0;j<n;j++)
	    {
	        string s;
	        std::cin >> s;
	        if(s=="CONTEST_WON")
	        {
	            sum+=300;
	            int x;
	            std::cin >> x;
	            if(20-x>=0)
	                sum+=(20-x);
	        }
	        else if(s=="TOP_CONTRIBUTOR")
	        {
	            sum+=300;
	        }
	        else if(s=="BUG_FOUND")
	        {
	            int x;
	            std::cin >> x;
	            sum+=x;
	        }
	        else if(s=="CONTEST_HOSTED")
	        {
	            sum+=50;
	        }
	    }
	    if(r=="INDIAN")
	        std::cout << sum/200 << std::endl;
	    else
	        std::cout << sum/400 << std::endl;
	}
	return 0;
}
