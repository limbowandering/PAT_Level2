#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(int a,int b){return a > b;}

int main(){
  int n;
  cin >> n;
  int *a = new int[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a,a+n,cmp);
  int t;
  for(int i = 0; i < n; i++){
    t = a[i];
    while(t != 1 && t != 999){
      if(t%2 == 0){
        t /= 2;
      }else{
        t = (t * 3 + 1) / 2;
      }
      for(int j = 0; j < n; j++){
        if(t == a[j] && j != i){
          a[j] = 999;
        }
      }
    }
  }
  sort(a, a+n, cmp);
  int tmp = 0;
  for(int i = n - 1; i >= 0; i--){
    if(a[i] != 999){
      tmp = i;
    }
  }
  for(int i = tmp; i < n-1; i++){
    cout << a[i] << " ";
  }
  cout << a[n - 1];
  delete[] a;
  return 0;
}