#include <iostream>
using namespace std;

bool isPrime(int a){
  for(int i = 2; i * i <= a; i++){
    if(a % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  int cnt = 0;
  for(int i = 5; i <= n; i++){
    if(isPrime(i-2) && isPrime(i))
      cnt++;
  }
  cout << cnt;
  return 0;
}