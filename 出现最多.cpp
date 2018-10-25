#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int count,num;
	int min,max=0;
	int n[10002];
	int a[10001];
	int k;
	cin>>num;
	for(int i=0;i<num;i++)
        {   
        	cin>>a[i];
        	n[a[i]]++;
        	if(n[a[i]]>max)
        	{
        			 max=n[a[i]];
        			 k=i;
        	}
        
        } 
        cout<<a[k]<<endl;
        cout<<max;
    
} 
