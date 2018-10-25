#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int number[10001]={0};
	int a[1001];
	int max;
	int m;
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
	cin>>a[i];
	}
	sort(a,a+num);
	 max=a[num-1];
    for(int i=0;i<num;i++){
        number[a[i]]++;
     }
     m=number[0];
     int k=0;
     for(int i=0;i<=max;i++){
      if(number[i]>m)
       {
           k=i;
           m=number[i];
       }
     }
     cout<<k;
	return 0;
}
