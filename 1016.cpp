#include <iostream>
#include <string>

using namespace std;

int main(){
  string A,B;
  int DA, DB;
  int pa = 0, pb = 0;
  cin >> A >> DA >> B >> DB;
  for(int i = 0; i < A.length(); i++){
    if(A[i]-'0' == DA){
      pa++;
    }
  }
  for(int i = 0; i < B.length(); i++){
    if(B[i]-'0' == DB){
      pb++;
    }
  }
  int resa = 0,resb = 0;
  for(int i = 0; i < pa; i++){
    resa = 10 * resa + DA;
  }
  for(int i = 0; i < pb; i++){
    resb = 10 * resb + DB;
  }
  cout << resa + resb;
  return 0;
}