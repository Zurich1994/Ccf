#include <iostream>
#include<ctime>
#include<algorithm> 
#define N 10000
using namespace std;
int check(int a[],int n)
{
	int bestc=0,c=0,bestx=a[0];
	for(int i=0;i<n;i++)	
	{
		if(a[i]==a[i+1])c++;
		else 
		{
			if(c>bestc){bestc=c;bestx=i;}
			c=0;
		}
	}
	return a[bestx];
}
int main()
{
	int n,i,a[N];
	
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	
	cout<<check(a,n)<<endl;
	
	
} 