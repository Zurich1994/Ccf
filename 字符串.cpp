#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m,p;
	cin>>m;
    int flag,n;
    cin>>flag;
    cin>>n;
    while(n--)
    {
    	cin>>p;
		if(flag==0)
    	{
    		int j=0,sum=0;
			for(int i=0;i<p.size();i++)
    		   {
    		     if((p[i]-'0')==(m[j]-'0') || (p[i]-'0'+32)==(m[j]-'0')|| (p[i]-'0'-32)==(m[j]-'0'))
    		           {
    		           	  for(;j<m.size();j++)
    		           	    {
    		           	      if((p[i]-'0')==(m[j]-'0') || (p[i]-'0'+32)==(m[j]-'0')|| (p[i]-'0'-32)==(m[j]-'0'))
    		           	                           i++;
    		           	      else
    		           	          {
    		           	          	j=0;break;
    		           	          }
    		           	    }
    		           }
    		    if(m[j]=='\0')
    		      {cout<<p<<endl;
    		       break;
    		      }  
    		  }
    	}
    	else if(flag==1)
    	{
    		int j=0,sum=0;
			for(int i=0;i<p.size();i++)
    		   {
    		     if((p[i]-'0')==(m[j]-'0'))
    		           {
    		           	  for(;j<m.size();j++)
    		           	    {
    		           	      if((p[i]-'0')==(m[j]-'0'))
    		           	                i++;
    		           	      else
    		           	          {
    		           	          	j=0;break;
    		           	          }
    		           	    }
    		           }
    		   if(m[j]=='\0')
    		      {cout<<p<<endl;
    		       break;
    		      }  
    		  }
    	}
    }
}

