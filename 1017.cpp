#include <iostream>

using namespace std;

int main(){
  string s;
  cin >> s;
  int a;
  cin >> a;
  int len = s.length();
  int t = 0;
  int tmp = 0;
  t = (s[0] - '0') / a;
  if((t != 0 && len > 1) || len == 1){
    cout << t;
  }
  tmp = (s[0] - '0') % a;
  for(int i = 1; i < len; i++){
    t = (tmp * 10 + s[i] - '0') / a;
    cout << t;
    tmp = (tmp * 10 + s[i] - '0') % a;
  }
  cout << " " << tmp;
  return 0;
}