#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

#define MAX = 1000;

int main(){
  int N;
  cin >> N;
  vector<int> v;
  int t = 0, cnt = 0, tmp = 0;
  int res1 = 0, res2 = 0, res3 = 0, res5 = 0;
  float res4=0.0;
  int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
  vector<int> a1,a2,a3,a4,a5;

  for(int i = 0; i < N; i++){
    cin >> tmp;
    v.push_back(tmp);
  }

  //就地处理 比上次写的5次单独处理好 就地处理
  for(int i = 0; i < v.size(); i++){
    if(v[i] % 10 == 0){
      res1 += v[i];
      flag1 = 1;
    }
    if(v[i] % 5 == 1){
      if(t % 2 == 0){
        res2 += v[i];
      }else{
        res2 -= v[i];
      }
      t++;
      flag2 = 1;
    }
    if(v[i] % 5 == 2){
      res3++;
      flag3 = 1;
    }
    if(v[i] % 5 == 3){
      res4+=v[i];
      cnt++;
      flag4 = 1;
    }
    if(v[i] % 5 == 4){
      if(res5 < v[i])
        res5 = v[i];
      flag5 = 1;
    }
  }
  res4 = res4/cnt;
  if(flag1 == 0){
    cout << "N ";
  }
  else{
    cout <<res1 << " ";
  }
  if(flag2 == 0){
    cout << "N ";
  }
  else{
    cout << res2 << " ";
  }
  if(flag3 == 0){
    cout << "N ";
  }else{
    cout << res3 << " ";
  }
  if(flag4 == 0){
    cout << "N ";
  }
  else{
    printf("%.1f ",res4);
  }
  if(flag5 == 0){
    cout <<"N";
  }
  else{
    cout << res5;
  }
  return 0;
}