#include <iostream>
#include <string.h>
using namespace std;
int flag(char str[])
{
  int jj, ii;
  int times[4] = {0};//times[j]记录0-3这些数字中数字j出现的次数
                     //判断数组中是否只包含0-3且这些数字至少出现一次，是则返回1，否则返回0
  for (jj = 0; jj<strlen(str); jj++){
    if (str[jj] == '0' || str[jj] == '1' || str[jj] == '2' || str[jj] == '3'){
          times[str[jj] - '0']++;
          continue;
     }
    else
      break;
   }
//cout << "strlen(str)= " << strlen(str )<< " jj= " << jj << endl;
   if ((jj < (strlen(str))) || times[0] < 1 || times[1] < 1 || times[2] < 1 || times[3] < 1){
      return 0;//不是有趣数
    }
   else
    {
      for (ii = (strlen(str) - 1); ii>=0; ii--){//对每个数，判断是否满足有趣数的规则，满足则返回1，不满足则返回0
         if (str[ii] == '0')
           {
            for (jj = 0; jj < ii; jj++)
            {
             if (str[jj] == '1')
              {
               return 0;
               break;
              }
            }
    }
  if (str[ii] == '2')
  {
    for (jj = 0; jj < ii; jj++)
     {
       if (str[jj] == '3')
        return 0;
     } 
  }
 }
  return 1;
 }

}
int main(){
  int n, cnt=0;
  int min=1;
  int flagg;//用于标识某个数是否只含数字0-3
  char nstr[10000];
  cin >> n;//位数
  for (int i = 1; i < n; i++)
  min = min * 10;//n位数的最小值
  for (int i = min*2; i < min*3; i++){//第一位2
   
   int num = i;//判断num是否为有趣数
   for (int j = n-1; j >=0; j--)
    {//将num的各位数字按从最高位到个位的顺序存入到数组str中
     nstr[j] = num%10+'0';
     num = num / 10;
    }
    nstr[n] = '\0';
    flagg = flag(nstr); 
    if (flagg == 0)
     continue;
    if (flagg==1){
     cnt++;
    }
   }
 cnt = cnt % 1000000007;
cout << cnt << endl;
return 0;
}
