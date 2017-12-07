#include <iostream>

using namespace std;

int main(){
  long long int a, b, c;
  int i = 0, n;
  cin >> n;
  while(i < n){
    cin >> a >> b >> c;
    if(a + b > c){
      cout << "Case #" << i+1 << ": true" << endl;
    }
    else{
      cout << "Case #" << i+1 << ": false"<<endl;
    }
    i++;
  }

  return 0;
}