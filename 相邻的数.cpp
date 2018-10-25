#include<iostream>
using namespace std;
int main()
{
	int a[1000]={0};
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>a[i];
	for(int i=0;i<n;i++)
	 for(int j=i;j<n;j++)
	  {
	  	if(a[i]==a[j]+1 || a[i]==a[j]-1)
	  	     sum++;
	  }
	  cout<<sum<<endl;
	  return 0;
}
