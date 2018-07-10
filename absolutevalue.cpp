#include<iostream>
int main()
{
    int i,u,n,m,sum=0;
    std::cout<<"enter the lower limit";
    std::cin>>m;
    std::cout<<"enter upper limit";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
	if(n%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==u)
	{
	  std::cout<<sum;
	  std::cout<<"\n number is perfect";
    }
	else
	  std::cout<<"number is not perfect";
	return 0;
}
