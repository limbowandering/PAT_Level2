#include <iostream>
#include <string>

using namespace std;

int main(){
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  //char res1, res2, res3;
  int len1 = (s1.length() <= s2.length()) ? s1.length() : s2.length();
  int len2 = (s3.length() <= s4.length()) ? s3.length() : s4.length();
  int i;

  for(i = 0; i < len1; i++){
    if(s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G'){
      if(s1[i] == 'A')
        cout << "MON ";
      if(s1[i] == 'B')
        cout << "TUE ";
      if(s1[i] == 'C')
        cout << "WED ";
      if(s1[i] == 'D')
        cout << "THU ";
      if(s1[i] == 'E')
        cout << "FRI ";
      if(s1[i] == 'F')
        cout << "SAT ";
      if(s1[i] == 'G')
        cout << "SUN ";
      break;
    }
  }
  for(i++;i < len1; i++){
    if(s1[i] == s2[i] && ((s1[i] >= '0' && s1[i] <= '9')||(s1[i] >= 'A' && s1[i] <= 'N'))){
      if(s1[i] >= '0' && s1[i] <= '9'){
        cout << "0" << s1[i] << ":";
      }
      else{
        int tmp = s1[i] - 'A' + 10;
        cout << tmp << ":";
      }
      break;
    }
  }
  for(i = 0; i < len2; i++){
    if(s3[i] == s4[i] && ((s3[i] >= 'a' && s3[i] <= 'z')||(s3[i] >= 'A' && s3[i] <= 'Z'))){
      if(i >= 10){
        cout << i;
      }else{
        cout << "0" << i;
      }
    }
  }
  return 0;
}