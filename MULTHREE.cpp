#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long l=(b+c)%10;
        long long sum=b+c+l;
        if(a==2)
        {
            if((b+c)%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            a=a-3;
            for(;a>0;a--)
            {
                if(l==6){
                    long long s=a/4;//caluclate num of set
                    sum+=20*s;
                    a-=s*4;
                    if(a==1)
                        sum=sum+2;
                    else if(a==2)
                        sum=sum+6;
                    else if(a==3)
                        sum=sum+14;
                    break;
                }
                else if(l==0){
                    break;
                }
                else{
                    l=(2*l)%10;
                    sum += l;
                }
            }
            if(sum%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
