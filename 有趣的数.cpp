#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int min,max;
	int q=1;
	int  p=1;
	int a[1001];
	int count=0;
	int n;
	cin>>n;
    for(;q<n-1;q++){
      for(;p<n-1;p++){
      	min=p<q?p:q;
      	max=p>q?p:q;
      	count+=pow(2,min)*pow(2,max-min)*pow(2,n-1-max)*2;
      }	
    }
    cout<<count%1000000007; 
	return 0;
}
