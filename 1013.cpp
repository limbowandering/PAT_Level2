#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int x){
  for(int i = 2; i * i <= x; i++){
    if(x % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int M, N, cnt = 0;
  cin >> M >> N;
  vector<int> res;
  int i = 2;
  while(cnt < N){
    if(isPrime(i)){
      cnt++;
      if(cnt >= M)
        res.push_back(i);
    }
    i++;
  }
  // int s = res.size();
  // int row = s / 10;
  // if(s % 10 == 0){
  //   row -= 1;
  // }
  // for(int j = 0; j < row; j++){
  //   for(int k = 0; k < 9; k++){
  //     cout << res[10*j + k] << " ";
  //   }
  //   cout << res[(j+1)*10 - 1] << endl;
  // }
  // for(int j = row*10; j < s - 1; j++){
  //   cout << res[j] << " ";
  // }
  // cout << res[s-1];

  for(int j = 0; j < res.size() - 1; j++){
    cout << res[j];
    if((j+1) % 10 == 0){
      cout << endl;
    }
    else cout << " ";
  }
  cout << res[res.size() - 1] << endl;
  return 0;
}

