#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct node{
  int num;
  int de;
  int cai;
};

int cmp(struct node a, struct node b){
  if((a.de + a.cai) != (b.de + b.cai))
    return (a.de + a.cai) > (b.de + b.cai);
  else if(a.de != b.de)
    return a.de > b.de;
  else
    return a.num < b.num;
}

int main(){
  int n, low, high;
  scanf("%d %d %d", &n, &low, &high);
  vector<node> v[4];
  node tmp;
  int total = n;
  for(int i = 0; i < n; i++){
    scanf("%d %d %d", &tmp.num, &tmp.de, &tmp.cai);
    if(tmp.de < low || tmp.cai < low){
      total--;
    }else if(tmp.de >= high && tmp.cai >= high){
      v[0].push_back(tmp);
    }else if(tmp.de >= high && tmp.cai < high){
      v[1].push_back(tmp);
    }else if(tmp.de < high && tmp.cai < high && tmp.de >= tmp.cai){
      v[2].push_back(tmp);
    }else{
      v[3].push_back(tmp);
    }
  }
  printf("%d\n", total);
  for(int i = 0; i < 4; i++){
    sort(v[i].begin(), v[i].end(), cmp);
    for(int j = 0; j < v[i].size(); j++){
      printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
    }
  }
  return 0;
}