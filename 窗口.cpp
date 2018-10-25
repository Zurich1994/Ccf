#include<iostream>
using namespace std;
int main(){
 int n,m;
 int map[100][100]={0};
 int clickx,clicky;
 int wx1,wx2,wy1,wy2;
 cin>>n>>m;
 int q=1;
 while(n--){

   cin>>wx1>>wy1>>wx2>>wy2;
    for(int j=wx1;j<wx2;j++)
     for(int k=wy1;k<wy2;k++){
       map[j][k]=q;
     }
     q++;
 }
 for(int i=0;i<m;i++){
  cin>>clickx>>clicky;
  if(map[clickx][clicky]==0)
   cout<<"IGNORED"<<endl;
  else
    cout<<map[clickx][clicky]<<endl;
 }
 return 0;
}
