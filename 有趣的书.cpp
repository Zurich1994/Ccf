#include <iostream>
#include <string.h>
using namespace std;
int flag(char str[])
{
  int jj, ii;
  int times[4] = {0};//times[j]��¼0-3��Щ����������j���ֵĴ���
                     //�ж��������Ƿ�ֻ����0-3����Щ�������ٳ���һ�Σ����򷵻�1�����򷵻�0
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
      return 0;//������Ȥ��
    }
   else
    {
      for (ii = (strlen(str) - 1); ii>=0; ii--){//��ÿ�������ж��Ƿ�������Ȥ���Ĺ��������򷵻�1���������򷵻�0
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
  int flagg;//���ڱ�ʶĳ�����Ƿ�ֻ������0-3
  char nstr[10000];
  cin >> n;//λ��
  for (int i = 1; i < n; i++)
  min = min * 10;//nλ������Сֵ
  for (int i = min*2; i < min*3; i++){//��һλ2
   
   int num = i;//�ж�num�Ƿ�Ϊ��Ȥ��
   for (int j = n-1; j >=0; j--)
    {//��num�ĸ�λ���ְ������λ����λ��˳����뵽����str��
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
