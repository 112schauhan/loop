#include<iostream>
int main()
{
    int i,n,sum=0;
    std::cout<<"enter the value of n";
    std::cin>>n;
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==n)
	{
	  std::cout<<sum;
	  std::cout<<"\n number is perfect";
    }
	else
	  std::cout<<"number is not perfect";
	return 0;
}
