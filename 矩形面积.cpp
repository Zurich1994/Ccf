#include<iostream>
using namespace std;
int main()
{
	int a[1001];
	int nowarea;

	int largestarea=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int i=0;i<n;i++){
		int iwide=1;
		for(int back=i-1;back>=0;back--)
		 {
		 	if(a[i]>a[back])break;
		 	 else iwide++;
		 }
		 for(int front=i+1;front<n;front++)
		 {
		 	if(a[i]>a[front])
			 break;
		 	 else iwide++;
		 }
		 nowarea=a[i]*iwide;
		 if(nowarea>=largestarea)
		   largestarea=nowarea;
	}
	cout<<largestarea;
	return 0;
}

