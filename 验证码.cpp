#include<iostream>
using namespace std;
int main()
{
   char book[13];
   char check;
   int k=1;
   int sum=0;
   for(int i=0;i<13;i++)
   cin>>book[i];

   check=book[12];

   for(int j=0;j<12;j++){
   	 if(j==1||j==11||j==5)
   	  continue;

   	 sum+=(book[j]-'0')*k;
   	 k++;
   }

   if(sum%11==10)
     book[12]='X';
   else
      book[12]=(char)('0'+sum%11);
   if(book[12]==check)
    cout<<"Right"<<endl;
   else
    for(int i=0;i<13;i++)
      cout<<book[i];
      cout<<endl;
}
