#include <iostream>
using namespace std;

void inv(long a)
{
    long b=0;
    while(a!=0)
    {
        b*=10;
        int r=a%10;
        b+=r;
        a=a/10;
    }
    std::cout << b << std::endl;
}

int main() {
    int a;
    std::cin >> a;
    long b[a];
    for(int i=0;i<a;i++)
    {
        std::cin >> b[i];
        inv(b[i]);
    }
	// your code goes here
	return 0;
}
